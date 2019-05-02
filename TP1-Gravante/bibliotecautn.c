#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getString(  char *pResultado,
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos)

{
    int retorno = -1;
    char bufferStr[4096];

    while(reintentos>0)
    {
        printf("%s",msg);
        fgets(bufferStr,sizeof(bufferStr),stdin);
        bufferStr[strlen(bufferStr)-1] = '\0';
        int bufferStrLength=strlen(bufferStr);
        if( pResultado != NULL &&
            reintentos >= 0 &&
            bufferStrLength>=minimo &&
            bufferStrLength<=maximo)
        {
            retorno = 0;
            strncpy(pResultado, bufferStr, bufferStrLength);
            break;
        } else
        {
            printf("%s",msgError);
            reintentos--;
        }
    }

    return retorno;

}

int isValidIntNumber (char* cadena)
{
    int cadenaLength=strlen(cadena);
    int i=0;
    int retorno=1;
    if (cadena[i]=='-')
    {
        i++;
    }
    for (; i<cadenaLength; i++)
    {
        if( !(cadena[i]>='0' && cadena[i]<='9'))
        {
            retorno = 0;
            break;
        }
    }
    return retorno;
}

int getNumber(  int *resultado,
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos)
{
    int retorno = -1;

    int bufferInt;

    while(reintentos > 0)
    {
        char bufferStr[4096]="";
        if(!getString(bufferStr,msg,msgError,1,6,1) &&
            isValidIntNumber(bufferStr))
        {
            bufferInt = atoi(bufferStr);
            if(bufferInt >= minimo && bufferInt <= maximo)
            {
                retorno = 0;
                *resultado = bufferInt;
                break;
            }else
            {
                printf("%s",msgError);
            }
        }else
        {
            printf("%s",msgError);
            reintentos--;
        }
    }
    return retorno;
}
