#include <stdio.h>

#define tam 5

int k,n=5;
int lista [tam];
int arcg, argv;

int main(int arcg, char *argv[])
{
	for(k=0;k<5;k++) /*Ajusta el intervalo de la lista*/
	{
		printf("\t\n Inserte un numero %d: ",k+1);
		scanf("%d", &lista[k]);
	}
	
	printf("\n Lista en orden inverso:");
	
	for(k=n-1;k>=0;k=k-1)
	{
		printf("%d,", lista[k]);
	}
	
	return 0;
}
