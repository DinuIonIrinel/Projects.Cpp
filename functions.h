#ifndef FUNCTIONS__H
#define FUNCTIONS__H

// alocare vector dinamic
int *alloc_array(int size);

// construire matrice harta
int **make_matrix(int sizel, int *sizec);

// functia care rezolva task1
double task1(int numl, int *numc, int **mat);

// afisare matrice harta
void print_mat(int numl, int *numc, int **mat);

// functia de modificare
void modify(int *numc, int **mat, char size, int lin, int ind, int val);

// functia de interschimbare
void swap(int **mat, char size, int lin, int ind);

// functia care rezolva task2
void task2(int numl, int *numc, int **mat);

// functia de gasire a gaurii negre
int check_area(int lin, int col, int pointer, int nl, int *nc, int **mat);

// functia care rezolva task3
void task3(int numl, int *numc, int **mat);

// dezalocarea memoriei
void free_memory(int size, int *array, int **mat);

#endif
