#include "Stos.h"



void Stos::push()
{
    if (rozmiar>=9)
    {
        cout << "Stos pelny!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<< "PUSH (jaka liczbe polozyc na stosie): ";

        rozmiar=rozmiar+1;
        cin>>dane[rozmiar];
    }
}

//------------------------------------------------------------------------

void Stos::pop()
{
    if (rozmiar>=1)
    {
        cout<<endl<<"POP - nastapi usuniecie ze stosu liczby: "<<dane[rozmiar];
        Sleep(2000);

        rozmiar=rozmiar-1;
    }
    else
    {
        cout << "Stos pusty!";
        Sleep(1000);
    }
}
//------------------------------------------------------------------------

void Stos::size()
{
    cout<<endl<<"Liczba elementow na stosie: "<<rozmiar;
    Sleep(2000);
}



