#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int utn_suma(   int *pOperandoA,
                int *pOperandoB,
                int *pResultado,
                int minimo,
                int maximo);

int utn_resta(  int *pOperandoA,
                int *pOperandoB,
                int *pResultado,
                int minimo,
                int maximo);

int utn_division(   int *pOperandoA,
                    int *pOperandoB,
                    float *pResultado,
                    int minimo,
                    int maximo);

int utn_multiplicacion( int *pOperandoA,
                        int *pOperandoB,
                        int *pResultado,
                        int minimo,
                        int maximo);

int utn_factorial(  int *pOperando,
                    int *pResultado,
                    int maximo);


#endif // FUNCIONES_H_INCLUDED
