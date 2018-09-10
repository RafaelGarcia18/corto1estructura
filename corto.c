#include <stdio.h>

int main(void)
{
    //unico vector usado
    float vector[4];
    //declaracion de matriz y llenado de matriz
    float matriz[4][7];
    for (int semana =0; semana<4; semana++)
    {
        for(int dia =0; dia<7; dia++)
        {
            printf("Ingrese el valor de las ventas de el dia %d de la semana %d\n",(dia+1),(semana+1));
            scanf("%f",&matriz[semana][dia]);
        }
    }
    //calculo e impresio de ventas por semana
    float suma;
    for (int semana =0; semana<4; semana++)
    {
        suma =0;
        for(int dia =0; dia<7; dia++)
        {
            suma=suma + matriz[semana][dia];
        }
        printf("El total de ventas de la semana %d es: %g \n",(semana+1),suma);

    }

    //calculo e impresion de promedio por semana

    for (int semana =0; semana<4; semana++)
    {
        suma =0;
        for(int dia =0; dia<7; dia++)
        {
            suma=suma + matriz[semana][dia];
        }
        printf("El promedio de ventas de la semana %d es: %g \n",(semana+1),(suma/7));
        //uso de el unico vector
        vector[semana] = suma;
    }

    //calculo e impresion de semana con mas ventas

    int semanaM=0;
    for (int i=0; i<4; i++)
    {
        if(vector[semanaM]<vector[i])
        {
            semanaM = i;
        }
    }
    printf("La semana con mas ventas fue la semana %d con $ %g \n",(semanaM+1),vector[semanaM]);
    
}
