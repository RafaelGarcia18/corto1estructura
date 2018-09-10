#include <stdio.h>

int main(void)
{
    //declaracion y llenado de matriz
    int matriz[5][3];
    for (int i=0; i<5; i++)
    {
        for(int o=0; o<3; o++)
        {
            printf("Ingrese un valor para la atriz en la posicion %d %d \n",(i+1),(o+1));
            scanf("%d",&matriz[i][o]);
        }
    }
    //declaracion y llenadeo de segunda mariz
    int matriz2[5][3];
    for (int i=0; i<5; i++)
    {
        for(int o=0; o<3; o++)
        {
            //determina si la columna es par por medio de operador mod
            if(o%2 ==0)
            {
                matriz2[i][o] = (matriz[i][o]*matriz[i][o]*matriz[i][o]);
            }
            else
            {
                matriz2[i][o] = (matriz[i][o]*matriz[i][o]);
            }
        }
    }
    //impresion de resultados de matrices
    printf("La matriz resultante es:\n");
    for (int i=0; i<5; i++)
    {
        for(int o=0; o<3; o++)
        {
            printf("%d\t",matriz2[i][o]);
        }
        printf("\n");
    }
    printf("La matriz original es:\n");
    for (int i=0; i<5; i++)
    {
        for(int o=0; o<3; o++)
        {
            printf("%d\t",matriz[i][o]);
        }
        printf("\n");
    }
}

