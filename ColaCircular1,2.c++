#include <iostream>
using namespace std;

struct Elemento {
	int dato;
	Elemento* siguiente;
};

void insertarElemento(Elemento *&, Elemento *&);
void mostrarElemento(Elemento *);
void buscarElemento(Elemento*, int);
void modificarElemento(Elemento*&, int );
void eliminarElemento(Elemento*&, Elemento*,int);

int main()
{
	int opcion_menu = 0;
	Elemento* primero = NULL;
	Elemento* ultimo = NULL;
	do
	{
	
		cout << "\n      Cola Circular   ";
		cout << "\n      Cola inicialmente vacía, inserte elementos para comenzar a operar con ellos (6 posiciones)   ";
		cout << "\n 1. Insertar      ";
		cout << "\n 2. Buscar        ";
		cout << "\n 3. Modificar     ";
		cout << "\n 4. Eliminar      ";
		cout << "\n 5. Desplegar     ";
		cout << "\n 6. Salir         ";
		
		cout << "\n\n Seleccona la opción que deseas: ";
		cin >> opcion_menu;
		switch (opcion_menu) {
		case 1:
			cout << "\n\n INSERTA ELEMENTO EN LA LISTA \n\n";
			for (int i = 0; i < 6; i++) {                                            /*Intervalo de posiciones (modificable)*/
				insertarElemento(primero, ultimo);
			}
			break;
		case 2:
			cout << "\n\n BUSCAR UN ELEMENTO EN LA LISTA \n\n";
			int n;
			cout << "Digita el numero:";
			cin >> n;
			buscarElemento(primero, n);
			break;
		case 3:
			cout << "\n\n MODIFICAR UN Elemento DE LA LISTA \n\n";
			cout << "Digita el numero:";
			cin >> n;
			modificarElemento(primero, n);
			break;
		case 4:
			cout << "\n\n ELIMINAR UN Elemento DE LA LISTA \n\n";
			cout << "Digita el numero:";
			cin >> n;
			eliminarElemento(primero,ultimo, n);
			break;
		case 5:
			cout << "\n\n DESPLEGAR LISTA DE Elementos \n\n";
			mostrarElemento(primero);
			break;
		case 6:
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
		}
	} while (opcion_menu != 6);
	cout << "\nJesús Andrés Orozco Ortiz\n";
	cout << "\n    Algoritmos & Estructura de Datos\n";
	cout << "               2CM2\n";
	cout << "            6/Marzo/2021\n";

	return 0;
	
}

void insertarElemento(Elemento *&primero, Elemento *&ultimo) {
	Elemento* nuevo = new Elemento();
	
	cout << "Insertar dato:";
	cin >> nuevo->dato;
	if (primero == NULL) {
		primero = nuevo;
		primero->siguiente = primero;
		ultimo = primero;

	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
	}

	cout << "\nElemento ingresado" << endl << endl;
	
}

void mostrarElemento(Elemento *primero) {

	Elemento* actual = new Elemento();
	actual = primero;
	if (primero != NULL) {
		do {
			cout << "->" << actual->dato;
			actual = actual->siguiente;
		} while (actual != primero);
	}
	else {
		cout << "\nSe encuentra vacia\n\n";
	}
}

void buscarNodo(Elemento* primero, int n) {
	Elemento* actual = new Elemento();
	actual = primero;
	bool bandera = false;
	if (primero != NULL) {


		do {
			if (actual->dato == n) {
				bandera = true;
			}
			else {
				bandera = false;
			}

			actual = actual->siguiente;
		} while (actual != primero && bandera != true);
		if (bandera == true) {
			cout << "\n El Elemento con el dato " << n << " ha sido encontrado\n\n";
		}
		else {
			cout << "\n El Elemento con el dato " << n << " no ha sido encontrado\n\n";
		}
	}
	else {
		cout << "\nSe encuentra vacia\n\n";
	}

}

void modificarElemento(Elemento*& primero, int n) {
	Elemento* actual = new Elemento();
	actual = primero;
	bool bandera = false;
	if (primero != NULL) {
		do {
			if (actual->dato == n) 
			{
				cout << "\n El Elemento con el dato " << n << " ha sido encontrado\n\n";
				cout << "\n Ingrese el dato que sustituira el Elemento:";
				cin >> actual->dato;
				cout << "\n Elemento modificado";
				bandera = true;
			}
			
			else
			{
				bandera = false;
			}

			actual = actual->siguiente;
		} while (actual != primero && bandera != true);
		if (bandera != true) {
			cout << "\n El Elemento con el dato " << n << " no ha sido encontrado\n\n";
		}
	}Elemento
	else {
		cout << "\nSe encuentra vacia\n\n";
	}
}

void eliminarElemento(Elemento*& primero, Elemento* ultimo,int n) {
	Elemento* actual = new Elemento();
	actual = primero;
	Elemento* anterior = new Elemento();
	anterior = NULL;
	bool bandera = false;
	if (primero != NULL) {
		do {
			if (actual->dato == n) {
				cout << "\n El Elemento con el dato " << n << " ha sido encontrado\n\n";
			
				if (actual == primero) {
					primero = primero->siguiente;
					ultimo->siguiente = primero;

				}
				else if (actual == ultimo) {
					anterior->siguiente = primero;
					ultimo = anterior;
				}
				else {
					anterior->siguiente = actual->siguiente;
				}

				cout << "\n Elemento Eliminado";
				bandera = true;
			}

			anterior = actual;
			actual = actual->siguiente;
		} while (actual != primero && bandera != true);
		if (bandera != true) {
			cout << "\n El ElementoElemento con el dato " << n << " no ha sido encontrado\n\n";
		}
	}
	else {
		cout << "\nSe encuentra vacia\n\n";
	}
}
