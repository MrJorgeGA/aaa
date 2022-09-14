#include "generador.h"
#include "vectores.h"
#include "cadenas.h"


using namespace std;

int main() {
    // funcion para generar automaticamente los archivos numericos
    // descomentar para crear automaticamente los archivos necesarios en la parte de entrada-salida. Una vez creados, se puede volver a comentar
    holaModuloVectores(); // función definida en vectores.cpp
    int opcion;
    cout << "Que ejercicio resolver (1-14): "; cin >> opcion;
    vector<int> v;
    int a = 0;
    string archivo;
    switch (opcion){
    case 1:
        cout << "Vector (>= 0): " <<endl;
        while (a>=0) {
            cin >> a;
            v.push_back(a);
        }
        v.pop_back();
        cout << "Divisor: ";cin >> a;
        if (divide(v,a)) {
            cout << "Si" << endl;
        } else {
            cout << "No" << endl;
        }
        break;
    case 2:
        cout << "Vector (>= 0): " <<endl;
        while (a>=0) {
            cin >> a;
            v.push_back(a);
        }
        v.pop_back();
        cout << "Maximo: " << mayor(v) << endl;
        break;
    case 3:
        cout << "Vector (>= 0): " <<endl;
        while (a>=0) {
            cin >> a;
            v.push_back(a);
        }
        v.pop_back();
        mostrarVector(reverso(v));
        break;
    case 4:
        cout << "Vector (>= 0): " <<endl;
        while (a>=0) {
            cin >> a;
            v.push_back(a);
        }
        v.pop_back();
        cout << "Cuantas posiciones rotar? ";cin >> a;
        mostrarVector(rotar(v,a));
        break;
    case 5:
        cout << "Vector (>= 0): " <<endl;
        while (a>=0) {
            cin >> a;
            v.push_back(a);
        }
        v.pop_back();
        if (estaOrdenado(v)) {
            cout << "Esta ordenado";
        } else {
            cout << "No está ordenado";
        }
        cout << endl;
        break;
    case 6:
        cout << "Vector (>= 0): " <<endl;
        while (a>=0) {
            cin >> a;
            v.push_back(a);
        }
        v.pop_back();
        mostrarVector (v);
        break;
    case 7:
        cout << "Archivo a leer: "; cin >> archivo;
        mostrarVector(leerVector(archivo));
        break;
    case 8:
        cout << "Archivo a escrubir: "; cin >> archivo;
        cout << "Vector (>= 0): " <<endl;
        while (a>=0) {
            cin >> a;
            v.push_back(a);
        }
        v.pop_back();
        guardarVector(v,archivo);
        break;
    default:
        return -1;
    }
    return 0;
}
