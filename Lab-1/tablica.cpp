#include "tablica.h"


void tablica::MierzenieCzasu(){
	
	clock_t start = clock();
	for (int i = 0; i < rozmiar; i++){
		tab[i] *= 2;
	}
	 printf( "Czas wykonywania: %lu ms\n", clock() - start );

}
void tablica::GeneratorLiczb()
{	
	srand(time(0));
	for (int i = 0; i < rozmiar; i++)
	{
		tab[i] = rand() % 10000;

	}
}
