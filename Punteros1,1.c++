/*USO DE PUNTEROS 1.1*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    
    num=18;
    
    p_num=&num;
    
    cout<<"Numero"<<num<<endl;
    cout<<"Dirección Numero"<<&num<<endl;
    
    cout<<"Numero"<<*p_num<<endl;
    cout<<"Dirección Numero"<<&p_num<<endl;
    
    
    return 0;
    
}
