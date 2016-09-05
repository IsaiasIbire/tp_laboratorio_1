#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


/**
* /brief muestra un menu por pantalla
* /param muestran los valores cargados por usuario
* /return devuelve la seleccion del usuario
*/
int menu(float nro_1,float nro_2){
    int seleccion;

    printf("1- Ingresar 1er operando (A=%.2f)\n",nro_1);
    printf("2- Ingresar 2do operando (B=%.2f)\n",nro_2);
    printf("3- Calcular la suma (A=%.2f+B=%.2f)\n",nro_1,nro_2);
    printf("4- Calcular la resta (A=%.2f-B=%.2f)\n",nro_1,nro_2);
    printf("5- Calcular la division (A=%.2f/B=%.2f)\n",nro_1,nro_2);
    printf("6- Calcular la multiplicacion (A=%.2f*B=%.2f)\n",nro_1,nro_2);
    printf("7- Calcular el factorial (A=%.2f!)\n",nro_1);
    printf("8- Calcular todas las operacione\n");
    printf("9- Salir\n");
    printf("\n");

    printf("Ingrese: ");
    scanf("%d",&seleccion);

    while(seleccion<1||seleccion>9){
        printf("¡FUERA DE RANGO!\nIngrese: ");
        scanf("%d",&seleccion);
    }
    while(seleccion>2&&seleccion<9&&seleccion!=7&&(nro_1==0||nro_2==0)){
        printf("INGRESE AMBOS VALORES PARA ESA OPERACION\nIngrese: ");
        scanf("%d",&seleccion);
    }
    return seleccion;
}


/**
* /brief realiza una suma de 2 valores ingresados por usuario
* /param son los valores para realizar la operacion con los numeros que ingreso el usuario
* /return devuelve el resultado de la suma
*/
float sumar(float nro_1,float nro_2){
    return nro_1+nro_2;
}


/**
* /brief realiza una resta de 2 valores ingresados por usuario
* /param son los valores para realizar la operacion con los numeros que ingreso el usuario
* /return devuelve el resultado de la resta
*/
float restar(float nro_1,float nro_2){
    return nro_1-nro_2;
}


/**
* /brief realiza una divicion de 2 valores ingresados por usuario
* /param son los valores para realizar la operacion con los numeros que ingreso el usuario
* /return devuelve el resultado de la divicion
*/
float divicion(float nro_1,float nro_2){
    return nro_1/nro_2;
}



/**
* /brief realiza una multiplicacion de 2 valores ingresados por usuario
* /param son los valores para realizar la operacion con los numeros que ingreso el usuario
* /return devuelve el resultado de la multiplicacion
*/
float multiplicacion(float nro_1,float nro_2){
    return nro_1*nro_2;
}


/**
* /brief calcula el factorial de un numero ingresado por el usuario
* /param numero ingresado por usuario
* /return devuelve el factorial del numero
*/
int factorial(float nro_1){
    int factorial, nro=nro_1;
    for(factorial=1;nro>1; nro--){
        factorial*=nro;
    }
    return factorial;
}
