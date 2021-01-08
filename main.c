#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {
    
    image_t *image =(image_t *) malloc(sizeof(image_t));
    char * command = (char *)malloc(200 * sizeof(char));
    char * argument = (char *)malloc(200 * sizeof(char));
    
    while (scanf("%s", command)) {
        if (strcmp(command, "LOAD") == 0) {
            scanf("%s", argument);
            load(image, argument);
        } else if (strcmp(command, "SELECT") == 0) {
            scanf("%s", argument);
            if (strcmp(argument, "ALL") == 0 ) {
                select_all(image);
            } else {
                
                int x2, y1, y2;
                int x1 = atoi(argument);
                scanf("%d", &x2);
                scanf("%d", &y1);
                scanf("%d", &y2);
                select_function(image, x1, x2, y1, y2);

            }

        } else if (strcmp(command, "SAVE") == 0) {
            scanf("%s", argument);
            save_function(image, argument);

        }else {
            printf("Invallid command\n");
        }
    } 
   

    //eliberare si mattrice
    free(command);
    free(argument);
    
    return 0;
}