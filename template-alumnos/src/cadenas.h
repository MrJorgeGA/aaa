#ifndef CADENAS_H
#define CADENAS_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<int> leerVector(string nombreArchivo);

void guardarVector(vector<int> v, string nombreArchivo);

int elementoMedio(vector<int>v);

void cantApariciones(string nombreArchivo);

int cantidadAparicionesDePalabra(string nombreArchivo, string palabra);

void promedio(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut);

void ordenarSecuencias(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut);

vector<int> interseccion();

#endif