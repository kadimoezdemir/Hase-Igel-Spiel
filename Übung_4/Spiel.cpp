#include "Spiel.h"

Spiel::Spiel(int anzFelder, int anzHasen, int anzIgel) {
	ziel = anzFelder;
	anz_hasen = anzHasen;
	anz_igel = anzIgel;
	anz_figuren = anzHasen + anzIgel;

	// Erzeugen der Objekte
	int counter = 0;
	for (int i = 0; i < anz_hasen; i++) {
		spielfiguren[counter] = new Hase();
		counter++;
	}

	for (int i = 0; i < anz_igel; i++) {
		spielfiguren[counter] = new Igel();
		counter++;
	}

	// Erzeugen des Spielfeld Arrays und des Ereignisfeld Arrays
	ereignis.ereignisfelderFestlegen();

	
}

int Spiel::getZiel() {
	return ziel;
}

int Spiel::wuerfle() {
	return rand() % 6 + 1;
}

void Spiel::macheZug() {
	// Lässt die erstellten Objekte ziehen
	do {
		// Alle existierenden Figuren ziehen lassen
		for (int i = 0; i < anz_figuren; i++) {
			spielfiguren[i]->ziehe(wuerfle());

			FelderZurück felder_zurück;
			KostenloserZug kostenloser_zug;
			NochmalWürfeln nochmal_würflen;
			
			if (ereignis.EreignisfeldArrayCheck(spielfiguren[i]->getPosition()) == true) {
				switch (ereignis.ereignisfeldNummer()) 
				{
				case 1: //3 Felder Zurück
					felder_zurück._felderZurück(spielfiguren[i]);
					break;

				case 2: //kostenoser Zug
					kostenloser_zug._kostenloserZug(spielfiguren[i]);
					break;

				case 3: //nochmal Würfeln
					nochmal_würflen._nochmalWürflen(spielfiguren[i]);
					break;
				}
			}
			getStand();
		}

	} while (getStand() == false);

	system("CLS");

	// Nachdem das Rennen vorbei ist, endgültige Positionen ausgeben
	for (int i = 0; i < anz_figuren; i++) {
		if (i < anz_hasen) {
			std::cout << "Hase #" << i + 1 << ": " << spielfiguren[i]->getPosition();
		}
		else {
			std::cout << "Igel #" << i + 1 - anz_hasen << ": " << spielfiguren[i]->getPosition();
		}
		std::cout << std::endl;
	}
	printGewinner();
}

bool Spiel::getStand() {

	system("CLS");
	// Positionen aller existierenden Figuren ausgeben
	for (int i = 0; i < anz_figuren; i++) {
		if (i < anz_hasen) {
			std::cout << "Hase #" << i + 1 << ": " << spielfiguren[i]->getPosition();
		}
		else {
			std::cout << "Igel #" << i + 1 - anz_hasen << ": " << spielfiguren[i]->getPosition();

		}
		std::cout << std::endl;

		if (spielfiguren[i]->getPosition() >= getZiel()) {
			gewinner = i;
			return true;
		}
	}

	return false;
}

void Spiel::printGewinner() {
	std::cout << std::endl;

	if (gewinner <= anz_hasen) {
		std::cout << "Der Hase #" << gewinner + 1 << " hat gewonnen!" << std::endl;
	}
	else if (gewinner >= anz_hasen) {
		std::cout << "Der Igel #" << gewinner + 1 - anz_hasen << " hat gewonnen!" << std::endl;
	}
}