/*************************************************************************************************

* Programa: Trabajo práctico Nº 1

* Objetivo:

    Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:

    1. Ingresar 1er operando (A=x)
    2. Ingresar 2do operando (B=y)
    3. Calcular la suma (A+B)
    4. Calcular la resta (A-B)
    5. Calcular la division (A/B)
    6. Calcular la multiplicacion (A*B)
    7. Calcular el factorial (A!)
    8. Calcular todas las operaciones
    9. Salir

    • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
    que contenga las funciones para realizar las 4 operaciones.

    • En el menú deberán aparecer los valores actuales cargados en los operandos A y B
    (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado).

    • Deberán contemplarse los casos de error (división por cero, etc)

    • Documentar todas las funciones


*   Version:

*   Autor: Isaias Alfredo Ibire

*************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    float resultado, nro_1=0, nro_2=0;
    int seleccion,cont_1=0;
    char resp=1;

    do{
        seleccion=menu(nro_1,nro_2);

        switch(seleccion){
            case 1:
                printf("Ingrese nro_1: ");
                scanf("%f",&nro_1);
                if(nro_1==0){
                    cont_1=1;
                }
                break;
            case 2:
                printf("Ingrese nro_2: ");
                scanf("%f",&nro_2);
                break;
            case 3:
                resultado=sumar(nro_1,nro_2);
                printf("Suma: %.2f\n",resultado);
                break;
            case 4:
                resultado=restar(nro_1,nro_2);
                printf("Resta: %.2f\n",resultado);
                break;
            case 5:
                if (nro_2==0){
                    printf("No se puede dividir por 0");
                    break;
                }
                else{
                    resultado=divicion(nro_1,nro_2);
                    printf("Divicion: %.2f\n",resultado);
                    break;
                }
            case 6:
                resultado=multiplicacion(nro_1,nro_2);
                printf("Multiplicacion: %.2f\n",resultado);
                break;
            case 7:
                if(nro_1>=0&&cont_1==1){
                    resultado=factorial(nro_1);
                    printf("Factorial: %.2f\n",resultado);
                    break;
                }
                if(nro_1<0){
                    printf("EL NUMERO INGRESADO ES NEGATIVO - NO SE PUEDE CALCULAR\n");
                    break;
                }
                if(cont_1==0){
                    printf("Ingrese un Nro. antes de calcular factorial\n");
                    break;
                }
            case 8:
                resultado=sumar(nro_1,nro_2);
                printf("Suma: %.2f\n",resultado);

                resultado=restar(nro_1,nro_2);
                printf("Resta: %.2f\n",resultado);

                resultado=divicion(nro_1,nro_2);
                printf("Divicion: %.2f\n",resultado);

                resultado=multiplicacion(nro_1,nro_2);
                printf("Multiplicacion: %.2f\n",resultado);

                resultado=factorial(nro_1);
                printf("Factorial: %.2f\n",resultado);
                break;
            case 9:
                resp=0;
                break;
        }
    }while(resp==1);

    return 0;
}
