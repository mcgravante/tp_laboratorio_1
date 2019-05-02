#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "bibliotecautn.h"


int main()
{
    int operandoA;
    int operandoB;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int resultadoFactorialA;
    int resultadoFactorialB;

    if( getNumber(&operandoA,"Ingrese operando A: \n","Error, intente nuevamente\n",-999999,999999,3)==0&&
        getNumber(&operandoB,"Ingrese operando B: \n","Error, intente nuevamente\n",-999999,999999,3)==0)
    {
        if(!utn_suma(&operandoA,&operandoB,&resultadoSuma,-999999,999999))
        {
            printf("El resultado de A+B es: %d\n",resultadoSuma);
        } else
        {
            printf("Error en Suma\n");
        }
        if(!utn_resta(&operandoA,&operandoB,&resultadoResta,-999999,999999))
        {
            printf("El resultado de A-B es: %d\n",resultadoResta);
        } else
        {
            printf("Error en Resta\n");
        }
        if(!utn_division(&operandoA,&operandoB,&resultadoDivision,-999999,999999))
        {
            printf("El resultado de A/B es: %f\n",resultadoDivision);
        } else
        {
            printf("Error en División\n");
        }
        if(!utn_multiplicacion(&operandoA,&operandoB,&resultadoMultiplicacion,-999999,999999))
        {
            printf("El resultado de A*B es: %d\n",resultadoMultiplicacion);
        } else
        {
            printf("Error en Multiplicación\n");
        }
        if((!utn_factorial(&operandoA,&resultadoFactorialA,999))&&(!utn_factorial(&operandoB,&resultadoFactorialB,999)))
        {
            printf("El factorial de A es: %d y El factorial de B es: %d",resultadoFactorialA,resultadoFactorialB);
        } else
        {
            printf("Error en Factorial\n");
        }
    }else
    {
        printf("ERROR");
    }
}
