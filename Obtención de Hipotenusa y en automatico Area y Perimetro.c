#include <stdio.h>
#include <math.h>

int main()
{
    printf("Hipotenusa, Area y Perimetro de un Triangulo rectangulo \n"); 
    /*Recordamos que para obtener la hipotenusa  de un triangulo rectangulo, usamos 
    Hipotenusa=√(Cateto Opuesto)²+(Cateto Adyacente)², para el area usamos A=(b*h)/2 
    y para obtener el Perimetro, usamos P=Cateto Opuesto+ Cateto Adyacente + Hipotenusa  */
    
    float Hipotenusa;
    float CatetoOpuesto, CatetoAdyacente;
    float area;
    float perimetro;
    
    printf("Escribe el valor del Cateto Opuesto\n");
    scanf("%f", &CatetoOpuesto);
    printf("Escribe el valor del Cateto Adyacente\n");
    scanf("%f", &CatetoAdyacente);
    Hipotenusa=sqrt(pow(CatetoOpuesto,2) + pow(CatetoAdyacente,2));
    printf("La Hipotenusa es:");
    printf("%f", Hipotenusa);

    
   
    area=(CatetoOpuesto*CatetoAdyacente)/2;     /*definimos el valor de area con la formula dada usando como base y altura el CatetoAdyacente y CatetoOpuesto*/
     printf("\n El area es:");
     printf("%f", area);  /*mostramos en pantalla el valor de area*/

   
    perimetro=CatetoOpuesto+CatetoAdyacente+Hipotenusa;
    printf("\n El Perimetro es:");/*definimos el valor de perimetro con la formula dada, usando como lados, la Hipotenusa, CatetoAdyacente y CatetoOpuesto*/
    printf("%f", perimetro);      /*mostramos en pantalla el valor de area*/
       return 0;
}
