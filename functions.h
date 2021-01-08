#ifndef FUNCTIONS__H
#define FUNCTIONS__H

//struct of an account
typedef struct {

    char *type;
    int width;
    int height;
    int max_color;
    int **values;
    int x1;
    int x2;
    int y1;
    int y2;
    
    } image_t;

extern image_t image;

void load_ppm(image_t *image, char *file_name);

//functia de load
void load(image_t *image, char *file_name);

//functia select
void select_function(image_t *image, int x1, int x2, int y1, int y2);

//functia select
void select_all(image_t *image);

//functia rotate
void rotate();

//functia crop
void crop();

//functia grayscale
void grayscale();

//functia sepia
void sepia();

//functia de salvare a imaginii
void save_function(image_t *image, char *file_name);

//functia de exit
int exit_function();

#endif