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
	ereignis.readinFeldgr��e(Felder);				//�bergabe der Feldgr��e an die Ereignisfeldklasse

	dasSpiel.macheZug();

	_getch();
	return 0;
}