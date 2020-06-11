#include "Ereignisfeld.h"

bool Ereignisfeld::readinFeldgröße(int anzFelder) {
	_feldgroesse = anzFelder;
	return false;
}

int Ereignisfeld::ereignisfeldNummer()
{
	return rand() % 3 + 1;							//Zum bestimmen der Ereignisfelder
}

void Ereignisfeld::ereignisfelderFestlegen()
{
	int zäh = 0;
	
	for (int i = 0; i < _feldgroesse; i++) {
		int Zu = rand() % 3 + 1;
		if (Zu == 2) {							// Array mit den EreignisfeldNummer wird erstellt, damit überprüft werden kann
			EreignisfeldArray[zäh] = i;			// ob die Spielfigur auf einem Ereignisfeld steht
			zäh++;
		}
	}
	zählvariable = zäh-1;			
}

bool Ereignisfeld::EreignisfeldArrayCheck(int position) 
{
	for (int i = 0; i < zählvariable; i++)
		if (position == EreignisfeldArray[i])
			return true;
	return false;										// Es wird überprüft ob die Spielfigur auf einem Ereignisfeld ist
}