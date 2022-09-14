#include "vectores.h"

// Función para probar en main.cpp si este módulo fue cargado correctamente
void holaModuloVectores(){
    cout << "El módulo vectores fue cargado correctamente" << endl;
}


//Ejercicio
bool divide(vector<int> v, int a){
	for (int i = 0; i < v.size(); i++) {
        if (v[i]%a != 0) {
            return false;
        }
    }
    return true;
}

//Ejercicio
int mayor(vector<int> v){
	if (v.size()==0) {
        return 0;
    }
    int maximo = v[0];
    for (int i = 1; i < v.size(); i++){
        if (v[i] > maximo) {
            maximo = v[i];
        }
    }
	return maximo;
}

//Ejercicio
vector<int> reverso(vector<int> v){
	vector<int> aux;
    for (int i = v.size()-1; i >= 0 ; i--){
        aux.push_back(v[i]);
    }
    return aux;
}

//Ejercicio
void swap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
vector<int> rotar(vector<int> v, int k){
	while (k >0) {
        for (int i = 0; i < v.size()-1; i++){
           swap (v[i], v[i+1]);
        }
        k--;
    }
    return v;
}

//Ejercicio
bool estaOrdenado(vector<int> v){
    if (v.size() <= 1) {
        return true;
    }
    bool ordMenor, ordMayor;
    if (v[0]<= v[1]) {
        ordMenor = true;
        for (int i = 0; i<v.size()-1; i++) {
            if (v[i]>v[i+1]) {
                ordMenor = false;
            }
        }
    } else {
        ordMenor = false;
    }
    if (v[0]>= v[1]){
        ordMayor = true;    
        for (int i = 0; i<v.size()-1; i++) {
            if (v[i]<v[i+1]) {
                ordMayor = false;
            }
        }
    } else {
        ordMayor = false;
    }
    return (ordMenor || ordMayor);
}

//Ejercicio
vector<int> factoresPrimos(int n){
	//que dado un entero devuelve un vector con los factores primos del mismo
	vector <int> v;
	for (int i = 2; i<(n/2)+1; i++) {
		if (n%i==0) {
			v.push_back(i);
			n = n/i;
			i--;
		}
	}
	if (v.size()==0) {
		v.push_back(n);
	}
	return v;
}



//Ejercicio
void mostrarVector(vector<int> v){
	//que dado un vector de enteros muestra por la salida estándar, el vector
	// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]
	std::cout << "[";
	for (int i = 0; i < v.size()-1; i++) {
		std::cout << v[i] <<", ";
	}
	if (v.size() == 0) {
		std::cout << "]" << std::endl;
	} else {
		std::cout << v[v.size()-1] << "]" << std::endl;
	}
}
