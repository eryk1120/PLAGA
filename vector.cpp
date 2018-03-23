#include "Vector.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


void tworz_wektor(string nazwa_pliku, vector<Kraje> &v)
{
    ifstream plik (nazwa_pliku.c_str());

    if(plik.good())
        cout<<"Plik zalaczony poprawnie"<<"\n";

    while (!plik.eof())
    {
        Kraje kraj;
        kraj.nazwa="";
        plik.ignore(1);
        while (!plik.eof() && !(plik.peek()>='0' && plik.peek()<='9'))
        {

            char temp;
            plik.get(temp);
            kraj.nazwa=kraj.nazwa + temp;
        }

        plik  >> kraj.ludnosc>> kraj.powierzchnia >> kraj.dos_morze >> kraj.health_care >> kraj.GNI;
        kraj.gestosc = kraj.ludnosc/kraj.powierzchnia;
        //cout << endl << kraj. ludnosc << '\t' << kraj.powierzchnia ;
        v.push_back(kraj);
        //cout << endl;
    }
    return ;
}


void czytaj_macierz (string NazwaPliku, vector<Kraje> &v)
{
    ifstream plik (NazwaPliku.c_str());
    if (! plik.good())
        return;
    while ( ! plik.eof() )
    {
        int n=0;
        string x;
        getline ( plik , x );
        for (unsigned int i=0 ; i < x.size() ; i++ )
        {
            if (x[i] == '1')
                v[n].graniczy_z.dodaj_element_po(i);
        }
    }
}
