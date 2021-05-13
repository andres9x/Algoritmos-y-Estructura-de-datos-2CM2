inlcude <iostream>

int arregloNumeros [20];
using namespace std;

inst main()
{
    int cantidad, i, auxiliar;
    cout<<"Ingrese numero de elementos: ";
    cin>> cantidad;
    for(i=0; i < cantidad; i++)
    {
        cout<<endl<<"ingrese elemento"<<(i+1)<< ":";
        cin>> arregloNumeros[i];
    }
    
    for(i=0; i < cantidad; i++)
    {
        cout<<endl<<"Elemento"<<(i+1)<<":"<<arregloNumeros[i]<<endl
    }
    
    for(i=0; i < cantidad/2; i++)
    {
        auxiliar=arregloNumeros[i];
        arregloNumeros[i]=arregloNumeros[cantidad-1-i];
        arregloNumeros[cantidad-1-i]]=auxiliar;
    }
    
    cout<<endl;
    for(i=0; i < cantidad; i++)
    {
        cout<<endl<<"Elemento"<<(i+1)<<":"<<arregloNumeros[i]<<endl
    }
}
