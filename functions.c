#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void load_ppm(image_t *image, char *file_name) {
   

        FILE *file_load = fopen(file_name, "r");
        
        /*
        //trebuie sa ignori comentariile
        int ch = getc(file_load);
        while (ch == '#') {
            while (getc(file_load) != '\n') {
                ch = getc(file_load);
            }
        }
        ungetc(ch, file_load);*/

        fscanf(file_load, "%s%d%d%d", image -> type, &image -> width, &image -> height, &image -> max_color);

        //alocare matrice

        image -> values = malloc(image -> width * sizeof(image_t *));
         for(int i = 0; i < image -> width ; i++)
         {
            image -> values[i] = malloc(image -> height * sizeof(image_t));
         }
         
         //citire matrice

            for (int i = 0; i < image -> width; ++i) {
                for (int j = 0; j < image -> height; ++j) {
                    fscanf(file_load, "%d", &image -> values[i][j]);
                }
            }
             for (int i = 0; i < image -> width; ++i) {
                for (int j = 0; j < image -> height; ++j) {
                    printf("%d ", image -> values[i][j]);
                }
                printf("\n");
            }
            fclose(file_load);

}
//functia load a imaginii

void load(image_t *image, char *file_name) {
    
    FILE *file_load = fopen(file_name, "r");

    if (file_load == NULL) {

        printf("Failde to load %s\n", file_name);

        return;
        
    } else {
        
        
        //imagini p1, p2, p3
        printf("Loaded %s\n", file_name);   

        image -> type = malloc(sizeof(image_t));//grija null
        //trebuie sa ignori comentariile
        fscanf(file_load, "%s", image -> type);
        fclose(file_load);
        if (strcmp(image -> type, "P2") == 0) {
            image -> width = 0;
            load_ppm(image, file_name);
        } else {

        }
    }
    free(file_name);
}

//functia de selectare a imaginii

void select_function(image_t *image, int x1, int x2, int y1, int y2) {

    if (image -> width == 0) {
        printf("No image loaded\n");
        return;
    }
    
    if (x1 > x2 || y1 > y2 || x1 < 0 || x2 > image -> width || y1 < 0 || y2 > image -> height) {
        
        printf("Invallid coordonate");
    } else {

        image -> x1 = x1;
        image -> x2 = x2;
        image -> y1 = y1;
        image -> y2 = y2;
        printf("Selected %d%d%d%d", x1, x2, y1, y2);
    }
  
}

void select_all(image_t *image) {

    if (image -> width == 0) {
        printf("No image loaded\n");
        return;
    }
   
        image -> x1 = 0;
        image -> x2 = image -> width;
        image -> y1 = 0;
        image -> y2 = image -> height;

}

// functia de rotire a imaginii

void rotate() {

}

//functia de, decupare a imaginii

void crop(image_t *image) {

    for (int i = image -> x1; i < image -> x2; ++i) {
        for (int j = image -> y1; j < image -> y2; ++j) {
            image -> values[i][j] = image -> values[i - 1][j];

        }
    }

}

//functia grayscale

void grayscale() {

}

//functia sepia

void sepia() {

}

//functia de salvare a imaginii

void save_function(image_t *image, char *file_name) {

    FILE *file_save = fopen(file_name, "w");
    fprintf (file_save, "%s\n", image -> type);
    fprintf (file_save, "%d ", image -> width);
    fprintf (file_save, "%d\n", image -> height);
    fprintf (file_save, "%d\n", image -> max_color);

    for (int i = 0; i < image -> width; ++i) {
        for (int j = 0; j < image -> height; ++j) {
            fprintf (file_save, "%d ", image -> values[i][j]);
        }
        fprintf(file_save, "\n");
    }
    fclose (file_save);

}

//functia de oprire a programului

int exit_function(image_t *image) {
    
    free(image -> type);
    for (int i = 0; i < image -> width; ++i) {
        free(image -> values[i]);
    }
    free (image -> values);
    free(image);
    return 0;

}