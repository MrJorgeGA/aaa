#include "cadenas.h"

vector<int> leerVector(string nombreArchivo) {
    ifstream archivoIn;
    archivoIn.open(nombreArchivo,ios::in);
    int i = 0;
    vector<int> v;
    while (!archivoIn.eof()) {
        archivoIn >> i;
        v.push_back(i);
    }
    return v;
}

void guardarVector(vector<int> v, string nombreArchivo) {
    ofstream fout;
    fout.open (nombreArchivo);
    fout << "[";
    for (int i = 0; i < v.size()-1; i++) {
        fout << v[i] << ", ";
    }
    fout << v[v.size()-1] << "]";
}