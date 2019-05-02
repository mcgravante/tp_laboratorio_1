#include <stdio.h>
#include <stdlib.h>

int utn_suma(   int *pOperandoA,
                int *pOperandoB,
                int *pResultado,
                int minimo,
                int maximo)
{
    int ret=1;
    if((*pOperandoA>minimo&&*pOperandoA<maximo)&&(*pOperandoB>minimo&&*pOperandoB<maximo))
    {
        *pResultado=*pOperandoA+*pOperandoB;
        ret=0;
    }
    return ret;
}

int utn_resta(  int *pOperandoA,
                int *pOperandoB,
                int *pResultado,
                int minimo,
                int maximo)
{
    int ret=1;
    if((*pOperandoA>minimo&&*pOperandoA<maximo)&&(*pOperandoB>minimo&&*pOperandoB<maximo))
    {
        *pResultado=*pOperandoA-*pOperandoB;
        ret=0;
    }
    return ret;
}

int utn_division(   int *pOperandoA,
                    int *pOperandoB,
                    float *pResultado,
                    int minimo,
                    int maximo)
{
    int ret=1;
    if((*pOperandoA>minimo&&*pOperandoA<maximo)&&(*pOperandoB>minimo&&*pOperandoB<maximo))
    {
        if(*pOperandoB==0)
        {
            printf("No es posible dividir por cero\n");
        } else
        {
        *pResultado=(float)*pOperandoA/(float)*pOperandoB;
        ret=0;
        }
    }
    return ret;
}

int utn_multiplicacion( int *pOperandoA,
                        int *pOperandoB,
                        int *pResultado,
                        int minimo,
                        int maximo)
{
    int ret=1;
    if((*pOperandoA>minimo&&*pOperandoA<maximo)&&(*pOperandoB>minimo&&*pOperandoB<maximo))
    {
        *pResultado=*pOperandoA*(*pOperandoB);
        ret=0;
    }
    return ret;
}

int utn_factorial(  int *pOperando,
                    int *pResultado,
                    int maximo)
{
    int ret=1;
    int aux;
    int buffer=1;

    if(*pOperando>0&&*pOperando<maximo)
    {
        for (aux = *pOperando; aux > 1; aux--){
        buffer = buffer * aux;
        }
        *pResultado=buffer;
        ret=0;
    }
    return ret;
}
