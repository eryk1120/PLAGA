#include "lista.h"

using namespace std;


void lista::dodaj_element_po(int inde)
{
    node * aktualny= new node(inde);
    if (head == nullptr)
        head = aktualny;
    else if (ogon == nullptr)
    {
    ogon = aktualny;
    head -> nast = ogon;
    }
    else
    {
     ogon -> nast = aktualny;
     ogon = aktualny;
    }
}

void lista::wypisz_liste ()
{
    while (head != NULL)
    {
        cout << head << '\t' << head->indeks << '\t' << head->nast << endl;
        head = head->nast;
    }
}
