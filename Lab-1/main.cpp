#include <iostream>
#include <ctime>
#include "tablica.h"

using namespace std;

int main()
{
	tablica T;

	T.rozmiar = 1000;
    T.tab = new int[T.rozmiar];
	
	T.GeneratorLiczb();
	T.MierzenieCzasu();
	system("pause");
	return 0;
}