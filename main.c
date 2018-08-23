#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numMax;
    int numMin;
    int numero;
    int flag=1;
    float promedio;
    float acumulador=0;

    for (i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
        acumulador=acumulador+numero;

        if(flag==1)
        {
            numMax=numero;
            numMin=numero;
            flag=0;

        }
        if(numero>numMax)
        {
            numMax=numero;
        }
        if(numero<numMin)
        {
            numMin=numero;
        }




    }
    promedio=acumulador/10;
    printf("max: %d - min: %d ",numMax,numMin);
    printf("\nel promedio es %.2f ",promedio);

    return 0;
}
