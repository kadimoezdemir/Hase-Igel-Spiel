#include "NochmalWürfeln.h"

void NochmalWürfeln::_nochmalWürflen(Spielfigur* figur) {
	figur->ziehe(rand() % 6 + 1);
}