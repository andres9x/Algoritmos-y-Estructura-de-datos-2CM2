/*PROGRAMA PARA EVALUAR SI UN NÚMERO ES PRIMO O NO*/


#include <stdio.h>
#include <stdlib.h>

int numero, i, numero_primo,x, salir;

int main(){
	
	for(x=1; x<=100000; x++){
	    
	printf("\n\nEvalua si un número es primo:");
		printf("\n Escribe un número: ");
		scanf("%i", &numero);
	
		
		numero_primo=0;
		if(numero==0){
				numero_primo = - 3;
			}
		for(i=1; i<=numero; i++){
				if(numero%i==0){
					numero_primo++;
			}
		}
			if(numero==1){
			 numero_primo= numero_primo +2;
			}
			
		
		if(numero_primo>2){
			printf("No es primo\n\n");
			printf(" JESÚS ANDRÉS OROZCO ORTIZ\n Algoritmos & Estructura de Datos\n UPIIZ - IPN\n\n ");
		}else if(numero_primo > 0 && numero_primo<=2){
			printf("Si es primo\n\n");
			printf(" JESÚS ANDRÉS OROZCO ORTIZ\n Algoritmos & Estructura de Datos\n UPIIZ - IPN\n\n ");
		}else if(numero_primo<=-1){
			printf("Indeterminado\n\n");
			
			printf(" JESÚS ANDRÉS OROZCO ORTIZ\n Algoritmos & Estructura de Datos\n UPIIZ - IPN\n\n ");
		}
		do{
			printf("Para salir presiona (0) Para continuar, (1):");
			scanf("%i", &salir);
		}while((salir!=0)&(salir!=1));
		
		
		
		if(salir ==0){
			break;
			}else{ 
			system("cls");
			
			
			}
}

}
