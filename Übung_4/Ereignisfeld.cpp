#include "Ereignisfeld.h"

bool Ereignisfeld::readinFeldgr��e(int anzFelder) {
	_feldgroesse = anzFelder;
	return false;
}

int Ereignisfeld::ereignisfeldNummer()
{
	return rand() % 3 + 1;							//Zum bestimmen der Ereignisfelder
}

void Ereignisfeld::ereignisfelderFestlegen()
{
	int z�h = 0;
	
	for (int i = 0; i < _feldgroesse; i++) {
		int Zu = rand() % 3 + 1;
		if (Zu == 2) {							// Array mit den EreignisfeldNummer wird erstellt, damit �berpr�ft werden kann
			EreignisfeldArray[z�h] = i;			// ob die Spielfigur auf einem Ereignisfeld steht
			z�h++;
		}
	}
	z�hlvariable = z�h-1;			
}

bool Ereignisfeld::EreignisfeldArrayCheck(int position) 
{
	for (int i = 0; i < z�hlvariable; i++)
		if (position == EreignisfeldArray[i])
			return true;
	return false;										// Es wird �berpr�ft ob die Spielfigur auf einem Ereignisfeld ist
}