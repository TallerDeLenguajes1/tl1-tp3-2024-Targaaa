#include <stdio.h>
#include <time.h>
#define filas 5
#define columnas 12


int main(){
    int m[filas][columnas], max=0, min=50000, anio, mes, anio1, mes1;
    float promedio, ganancia;
    srand(time(NULL));
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            m[i][j] = rand() % (50000 - 10000 + 1) + 10000;
            printf("%d ",m[i][j]);
            ganancia += m[i][j];
            if (max < m[i][j])
            {
                max = m[i][j];
                anio = i+1;
                mes = j+1;
            }
            if (min > m[i][j])
            {
                min = m[i][j];
                anio1 = i+1;
                mes1 = j+1;
            }
            
        }
        promedio = ganancia/12;
        printf ("promedio %d: %2.f \n",i+1,promedio);
        promedio = 0;
        ganancia = 0;
    }
    printf("El valor maximo es %d y ocurrio en el anio %d y el mes %d \n",max,anio,mes);
    printf("El valor minimo es %d y ocurrio en el anio %d y el mes %d",min,anio1,mes1);

    return 0;
} 