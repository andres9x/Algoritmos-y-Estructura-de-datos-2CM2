/*USO DE PUNTEROS 1.4*/
#include <iostream>

using namespace std;

int main()
{

int vector[10]={0,10,20,30,40,50,60,70,80,90};
int *puntero;

puntero = vector;
cout<<*puntero<<endl;


(*puntero)++;
cout<<*puntero<<endl;


puntero++;
cout<<*puntero<<endl;


puntero=puntero+3;
cout<<*puntero<<endl;


    system("pause()");
    
    return 0;
    
}
