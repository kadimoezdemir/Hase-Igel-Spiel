#include "Spiel.h"


int main() {
	int Felder;

	srand((unsigned int)time(NULL));
	// Spielfeld Erstellung
	std::cout << "Anzahl der Felder festlegen: ";
	std::cin >> Felder;
	int anzHasen;
	std::cout << "Anzahl der Hasen festlegen: ";
	std::cin >> anzHasen;
	int anzIgel;
	std::cout << "Anzahl der Igel festlegen: ";
	std::cin >> anzIgel;


	Spiel dasSpiel(Felder, anzHasen, anzIgel);
	Ereignisfeld ereignis;		
	ereignis.readinFeldgröße(Felder);				//Übergabe der Feldgröße an die Ereignisfeldklasse

	dasSpiel.macheZug();

	_getch();
	return 0;
}