#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int nombres, longitud;
    char nombreNuevo[200], **pNombres;

    printf("Cantidad de nombres:\n");
    fflush(stdin);
    scanf("%d",&nombres);
    fflush(stdin);

    pNombres = (char **) malloc(sizeof(char *) *nombres); 

    for (int i = 0; i < nombres; i++)
    {   
        printf("Ingresar nombres:\n");
        gets(nombreNuevo);

        longitud=strlen(nombreNuevo);

        pNombres[i] = malloc(sizeof(char)*longitud);

        strcpy(pNombres[i], nombreNuevo);
        
    }
    printf("Nombres: \n");

    for (int j = 0; j < nombres; j++)
    {
       puts(pNombres[j]);
    }

    free(pNombres);
        
 
    return 0;
}