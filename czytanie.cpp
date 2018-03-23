#include "czytanie.h"

using namespace std;

lista ** sasiedztwo (string nazwa_pliku)
{
    lista ** glowa;

    ifstream MacSas (nazwa_pliku.c_str());

    cout << MacSas.rdstate();

    if (! MacSas.good() )
        return NULL;

    glowa = new  lista * [liczba];

    for (int i = 0 ; i < liczba ; i++)
    {
        glowa[i] = NULL;
        string x;
        getline (MacSas, x);
        for (int j = 0 ; j < liczba ; j ++ )
        {
            lista * aktualny = glowa[i];
            cout << MacSas.rdstate();
            if (x[j] == '1')
            {
                cout << "xDDD";
                aktualny = new lista;
                aktualny -> indeks = j;
                aktualny -> nast = NULL;
                aktualny = aktualny -> nast;
            }
        }
    }
    MacSas.close();
    return glowa;
}
