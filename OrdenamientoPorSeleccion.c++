#include <iostream>
#define max 5

using namespace std;



class Ordenamiento
{
private:
    int datos[max];
public:
    void llenado();
    void mostrar(string);
    void seleccion();
    Ordenamiento();
    ~Ordenamiento();
};
//Constructor
Ordenamiento::Ordenamiento()
{

}
//Destructor
Ordenamiento::~Ordenamiento()
{

}
void Ordenamiento::llenado()
{
    int i, dato;
    
    cout<<"ORDENAMIENTO POR SELECCION\n"<<endl;
    
    for (i=0;i<=max;i++)
    {
       
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}
void Ordenamiento::mostrar(string _estado)
{
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<max;i++)
    {
        cout<<datos[i]<<", ";
    }
    cout<<datos[max]<<"}"<<endl;
}
void Ordenamiento::seleccion()
{
    int i,j,aux,almacen;
    for(i=0;i<max;i++){
        almacen = i;
        for(j=i+1;j<=max;j++){
            if(datos[j]<datos[almacen]){
                almacen = j;
            }
        }
        aux = datos[i];
        datos[i] = datos[almacen];
        datos[almacen] = aux;
    }
}
int main()
{
    Ordenamiento objeto1;
    objeto1.llenado();
    objeto1.mostrar("desordenados");
    objeto1.seleccion();
    objeto1.mostrar("ordenados");
    cout<<"\nJESUS ANDRES OROZCO ORTIZ"<<endl;
    cout<<"\nGrupo:2CM2/ MARZO 2021\n Algoritmos & Estructura de Datos"<<endl;
    return 0;
}
