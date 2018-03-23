#include <iostream>
#include <vector>
#include "vector.h"
#include "lista.h"

using namespace std;

int main()
{
    vector<Kraje> v;
    tworz_wektor("Afryka.txt", v);
    tworz_wektor("Ameryki.txt", v);
    tworz_wektor("Eurazja.txt", v);
    tworz_wektor("Oceania.txt", v);
    czytaj_macierz("sasiedztow.txt",v);
    for (int i=0 ; i<v.size() ;i++)
    {
        cout << v[i].nazwa << ":::::" << endl;
        v[i].graniczy_z.wypisz_liste();
    }
    return 0;
}
