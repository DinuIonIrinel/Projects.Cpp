#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int *alloc_array(int size)
{
	int *array = malloc(size * sizeof(int *));
	return array;
}

int **make_matrix(int sizel, int *sizec)
{
	int **mat = (int **)malloc(sizel * sizeof(int *));
	if (!mat) {
		free(mat);
		return NULL;
	}
	for (int i = 0; i < sizel; ++i) {
		scanf("%d", &sizec[i]);
		mat[i] = malloc(sizec[i] * sizeof(int));
		if (!mat[i]) {
			for (int j = 0; j < i; j++)
				free(mat[j]);
			free(mat);
			return NULL;
		}
		for (int j = 0; j < sizec[i]; ++j)
			scanf("%X", &mat[i][j]);
	}
	return mat;
}

double task1(int numl, int *numc, int **mat)
{
	// numarul de bytes de pe margine
	int number_bytes = 0;
	number_bytes = 4 * numc[0] + 4 * numc[numl - 1] + 2 * (numl - 2);
	int sum = 0;
	// suma bytes de pe prima linie
	for (int j = 0; j < numc[0]; ++j) {
		sum += ((signed char *)(&mat[0][j]))[0];
		sum += ((signed char *)(&mat[0][j]))[1];
		sum += ((signed char *)(&mat[0][j]))[2];
		sum += ((signed char *)(&mat[0][j]))[3];
	}
	// suma bytes pe ultima linie
	for (int j = 0; j < numc[numl - 1]; ++j) {
		sum += ((signed char *)(&mat[numl - 1][j]))[0];
		sum += ((signed char *)(&mat[numl - 1][j]))[1];
		sum += ((signed char *)(&mat[numl - 1][j]))[2];
		sum += ((signed char *)(&mat[numl - 1][j]))[3];
	}
	// suma bytes de pe linii ramase
	for (int i = 1; i < numl - 1; ++i) {
		sum += ((signed char *)(&mat[i][0]))[0];
		sum += ((signed char *)(&mat[i][numc[i] - 1]))[3];
	}
	//determinare medie aritmetica
	double avg = (double)sum / number_bytes;
	return avg;
}

// afisarea hartii
void print_mat(int numl, int *numc, int **mat)
{
	for (int i = 0; i < numl; ++i) {
		for (int j = 0; j < numc[i]; ++j)
			printf("%08X ", mat[i][j]);
		printf("\n");
	}
}

// functia de modificare
void modify(int *nc, int **mat, char size, int lin, int ind, int val)
{	//daca suprafata se afla in afara matricii
	if (ind * size + sizeof(int) >= sizeof(int) * nc[lin]) {
		//pastram numarul de coloane inittial
		int aux = nc[lin];
		//numarul de elemente int necesare
		nc[lin] = (ind * size / sizeof(int) + 1);
		//alocam memoria necesara
		mat[lin] = realloc(mat[lin], nc[lin] * sizeof(int));
		//punem zero pe toate pozitilie nou alocate
		for (int j = aux; j < nc[lin]; ++j)
			mat[lin][j] = 0;
	}
	// schimbare de valoari
	if (size == 1)
		((char *)mat[lin])[ind] = val;
	else if (size == 2)
		((short *)mat[lin])[ind] = val;
	else
		mat[lin][ind] = val;
}

// functia de interschimbare
void swap(int **mat, char size, int lin, int ind)
{
	if (size == 2) {
		// interschimb primul cu ultimul byte
		short *p = &((short *)mat[lin])[ind];
		int aux = ((char *)p)[0];
		((char *)p)[0] = ((char *)p)[1];
		((char *)p)[1] = aux;
	}
	if (size == 4) {
		// interschimb primul cu ultimul byte
		int aux = ((char *)(&mat[lin][ind]))[0];
		((char *)(&mat[lin][ind]))[0] = ((char *)(&mat[lin][ind]))[3];
		((char *)(&mat[lin][ind]))[3] = aux;

		// interschimb al doilea cu al treilea byte
		int aux2 = ((char *)(&mat[lin][ind]))[1];
		((char *)(&mat[lin][ind]))[1] = ((char *)(&mat[lin][ind]))[2];
		((char *)(&mat[lin][ind]))[2] = aux2;
	}
	// pentru char nu se pot interschimba bytes
}

void task2(int numl, int *numc, int **mat)
{
	int number_operations;
	scanf("%d", &number_operations);
	for (int i = 0; i < number_operations; ++i) {
		char operation, csize;
		int lin, ind, size;
		scanf(" %c %c%d%d", &operation, &csize, &lin, &ind);
		if (csize == 'C')
			//valoare 1 pentur char
			size = 1;
		else if (csize == 'S')
			//valoarea 2 pentru short
			size = 2;
		else
			//valoare 4 pentru int
			size = 4;
		if (operation == 'M') {
			// daca operatia e modify citim si o valoare
			int new_value;
			scanf("%X", &new_value);
			modify(numc, mat, size, lin, ind - 1, new_value);

		} else if (operation == 'D')
			// apelam modifiy cu new_value = 0
			modify(numc, mat, size, lin, ind - 1, 0);
		else
			// apelam functia swap
			swap(mat, size, lin, ind);
	}
	print_mat(numl, numc, mat);
}

int check_area(int lin, int col, int pointer, int nl, int *nc, int **mat)
{	
	// daca byte-ul este diferit de 0
	if (((char *)&mat[lin][col])[pointer] != 0)
		return 0;
	// daca ne aflam in afara matricii
	if (lin < 0 || lin >= nl)
		return 0;
	if (col < 0 || col >= nc[lin])
		return 0;
	// marcam byte-ul ca fiind vizitat
	((char *)&mat[lin][col])[pointer] = 2;
	int sum = 1;

	// deplasare o linie mai sus
	sum += check_area(lin + 1, col, pointer, nl, nc, mat);

	// deplasare o linie mai jos
	sum += check_area(lin - 1, col, pointer, nl, nc, mat);
	
	// coloane
	if (pointer + 1 <= 3)
		sum += check_area(lin, col, pointer + 1, nl, nc, mat);
	else
		sum += check_area(lin, col + 1, 0, nl, nc, mat);
	if (pointer - 1 >= 0)
		sum += check_area(lin, col, pointer - 1, nl, nc, mat);
	else
		sum += check_area(lin, col - 1, 3, nl, nc, mat);

	return sum;
}

void task3(int numl, int *numc, int **mat)
{
	int max = 0, maxi, maxj;
	for (int i = 0; i < numl; ++i) {
		for (int j = 0; j < numc[i]; ++j) {
			for (int pointer = 0; pointer <= 3; ++pointer) {
				int sum = check_area(i, j, pointer, numl, numc, mat);
				if (sum > max) {
					max = sum;
					maxi = i;
					maxj = j * 4 + pointer;
				}
			}
		}
	}
	printf("%d %d %d", maxi, maxj, max);
}

void free_memory(int size, int *array, int **mat)
{
	for (int i = 0; i < size; ++i)
		free(mat[i]);
	free(mat);
	free(array);
}
