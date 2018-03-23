#ifndef LISTA_H
#define LISTA_H
#include <iostream>

class lista
{
private:
    struct node
    {
        node(int wartosc): indeks(wartosc), nast(nullptr){}
        int indeks;
        node * nast;

    };

public:

void dodaj_element_po ( int );
void wypisz_liste ();

lista(): head(nullptr), ogon(nullptr) {}

private:
 node * head;
 node * ogon;


};

#endif // LISTA_H
