#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <vector>
#include <fstream>
#include "lista.h"
using namespace std;

struct Kraje{
    unsigned int indeks;
    string nazwa;
    unsigned int ludnosc;
    unsigned int powierzchnia;
    unsigned int  gestosc;
    bool dos_morze;
    int health_care;
    int GNI;
    lista graniczy_z;
};

void tworz_wektor(string nazwa_pliku, vector<Kraje> &v);
void czytaj_macierz (string NazwaPliku, vector<Kraje> &v);

#endif // VECTOR_H
