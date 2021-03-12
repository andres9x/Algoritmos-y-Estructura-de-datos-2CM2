#include <stdio.h>

int main()
{
    printf("Area y Perimetro de un Triangulo rectangulo \n"); 
    /*Recordamos que para obtener el area de un triangulo rectangulo, usamos A=(b*h)/2 
    y para obtener el Perimetro, usamos P=l1+l2+l2  */
    float altura, base;
    float area;
    float l1, l2, l3;
    float perimetro;
    printf("\n Escribe la base:");
    scanf("%f", &base);    /*digitamos el valor de la base*/
    printf("\n Escribe la altura:");
    scanf("%f", &altura);     /*digitamos el valor de la altura*/
    area=(base*altura)/2;     /*definimos el valor de area con la formula dada*/
     printf("\n El area es:");
     printf("%f", area);  /*mostramos en pantalla el valor de area*/
     
    printf("\n \n Ahora escribe el lado 1\n");
    scanf("%f", &l1);   /*digitamos el valor de lado 1*/
    printf("Ahora escribe el lado 2\n");
    scanf("%f", &l2);    /*digitamos el valor de lado 2*/
    printf("Finalmente, escribe el lado 3\n");
    scanf("%f", &l3);  /*digitamos el valor de lado 3*/
    perimetro=l1+l2+l3;
    printf("El Perimetro es:");/*definimos el valor de perimetrocon la formula dada*/
    printf("%f", perimetro);      /*mostramos en pantalla el valor de area*/
       return 0;
}
