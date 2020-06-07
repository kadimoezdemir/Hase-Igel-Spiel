# Hase-Igel-Spiel

## Beschreibung
Ein Wettrennen zwischen Hasen und Igel (Übung von SS19)

Zu Beginn wird angegeben wie große die Strecke ist(Anzahl der Felder) und wie viele Hasen und Igel gegeneinander laufen.

Zum Vorrücken benötigt der Hase Karotten. Zu beginn hat er einen Vorrat von 31 Karotten.
Wenn der Hase N Felder vorwaerts zieht, verringert sich sein Karottenvorrat nach der Formel ![](https://latex.codecogs.com/gif.latex?%5Cdpi%7B80%7D%20%5Csum_%7Bi%3D1%7D%5E%7BN%7D%20i), d.h. fuer beispielsweise 4 Felder benoetigt er 1+2+3+4=10 Karotten. Wenn der Hase N Felder rueckwaerts zieht, bekommt er N\*10 Karotten zu seinem Vorrat hinzu.
Falls der Hase drei Mal nicht genuegend Karotten hat, um seinen Zug auszufuehren, macht er einen Rueckwaertszug.

Der Igel hingegen benötigt Salat zum Vorrücken. Am Anfang hat dieser einen Salat.
Mit dem Salat kann ein Igel 10 Felder ziehen. Ist der Salat aufgebraucht, findet der Igel
sofort einen neuen Salat, den er im naechsten Zug verwenden kann. Reicht der Salat nicht fuer
den Zug aus, muss der Igel aussetzen.

Die Streacke besteht aus normalen Feldern und Ereignisfeldern. Landet eine Spielfigur auf einem Ereignisfeld, wird eine Ereigniskarte gezogen. 
Ereignisse:
- Dein letzter Zug kostet nichts: Der Vorrat wird wieder auf den Stand vor dem Zug zurueckgesetzt.
- Du darfst noch einmal wuerfeln: Die Figur darf gleich noch einmal wuerfeln.
- Gehe drei Felder zurueck: Die Figur zieht zurueck (und erhaelt den entsprechenden Vorrat.)

Zum Schluss wird der Gewinner ausgegeben.
Side Note: Der Hase gewinnt nicht immer:)

## UML
![alt text](https://github.com/kadimoezdemir/Hase-Igel-Spiel/blob/master/UML%20Dia.png)
