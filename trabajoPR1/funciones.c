#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int menu(void)
{
    char respuesta='s';
    int opcion;
    float operador1=0;
    float operador2=0;
    int flag1=0;
    int flag2=0;
    do
    {
        printf("-----------------------\n");
        printf("1- Ingrese el operador A= %.2f\n",operador1);
        printf("2- Ingrese el operador B= %.2f\n",operador2);
        printf("3- Calcular la suma de los dos numeros\n");
        printf("4- Calcular la resta de los dos numeros\n");
        printf("5- Calcular la multipliciacion de los dos numeros\n");
        printf("6- Calcular la division de los dos numeros\n");
        printf("7- Calcular el factorial de los dos numeros\n");
        printf("8- Mostrar todos los resultados\n");
        printf("-----------------------\n\n");
        printf("ingrese una opcion: ");
        scanf("%d",&opcion);
        if(opcion<1||opcion>8)
        {
            printf("error opcion no valida\n\n");
        }
        else
        {
            switch(opcion)
            {
            case 1:
                printf("~~~Ingrese el operador A: ");
                scanf("%f",&operador1);
                flag1=1;
                break;
            case 2:
                printf("~~~Ingrese el operador B: ");
                scanf("%f",&operador2);
                flag2=1;
                break;
            case 3:
                if(flag1==1 && flag2==1)
                {
                    suma(operador1,operador2);
                    printf("la suma se realizo con exito\n");
                }
                else
                {
                    printf("error uno de los operadores no fue ingresado\n");
                }
                break;
            case 4:
                if(flag1==1 && flag2==1)
                {
                    resta(operador1,operador2);
                    printf("la resta se realizo con exito\n");
                }
                else
                {
                    printf("error uno de los operadores no fue ingresado\n");
                }
                break;
            case 5:
                if(flag1==1 && flag2==1)
                {
                    multiplicacion(operador1,operador2);
                    printf("la multiplicacion se realizo con exito\n");
                }
                else
                {
                    printf("error uno de los operadores no fue ingresado\n");
                }
                break;
            case 6:
                if(flag1==1 && flag2==1)
                {
                    division(operador1,operador2);
                }
                else
                {
                    printf("error uno de los operadores no fue ingresado\n");
                }
                break;
            case 7:
                printf(".....Mantenimiento.....\n");
                break;
            case 8:
                Mostrar_Operaciones(operador1,operador2);
                break;
            }
            printf("\ndesea finalizar el programa? s/n: ");
            fflush(stdin);
            scanf("%c",&respuesta);
            system("cls");
        }
    }
    while(respuesta == 'n');
    return 0;
}

float suma(float operador1, float operador2)
{
    return operador1+operador2;
}

float resta(float operador1,float operador2)
{
    return operador1-operador2;
}

float multiplicacion (float operador1, float operador2)
{
    return operador1*operador2;
}

float division(float operador1,float operador2)
{
    float resultado;
    if(operador2!=0)
    {
        resultado=operador1/operador2;
    }
    else
    {
        printf("error no se puede realizar la division por cero\n");
        return -1;
    }
    return resultado;
}

void Mostrar_Operaciones(float operador1,float operador2)
{
    printf("la suma es: %.2f\n",suma(operador1,operador2));
    printf("la resta es: %.2f\n",resta(operador1,operador2));
    printf("la multiplicacion es: %.2f\n",multiplicacion(operador1,operador2));
    printf("la division es: %.2f\n",division(operador1,operador2));
}
