/*USO DE PUNTEROS 1.2*/
#include <iostream>
using namespace std;

int main()
{
    int *pEntero;
    int x = 10;
    int y;
    
    cout<<y<<endl;
    cout<<*pEntero<<endl;
    pEntero = &y;
    *pEntero = x;
    cout<<y<<endl;
    cout<<pEntero<<endl;
    cout<<*pEntero<<endl;
    
    system("pause(");
    
    return 0;
    
}
