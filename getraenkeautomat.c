#include<stdio.h>

int main () {

	/*
	* 	Diese Programm soll einen Getraenkeautomaten simulieren.
	*/

	printf("\n ******************************** ");
	printf("\n *   ^,,,,^   *                 * ");
	printf("\n *  ( o x o)  * Getränkeautomat * ");
	printf("\n *  ( 7   7)  *                 * ");
	printf("\n *   ´´´´´´   *         ©S.Buch * ");
	printf("\n ******************************** \n\n");
	
	//Geldeinwurf
	int geldstueck;
	printf("\nEin Getraenk kostet 1€. Bitte werfen Sie eine passende 1-Euro-Münze ein. Ihr Einwurf: ");
	scanf("%d",&geldstueck);

	//Abfrage, ob das korrekte Geldstück eingeworfen wurde
	if (geldstueck == 1) {
		printf("\nVielen Dank! Bitte entnehmen Sie ihr Getraenk!\n");
	} else {
		printf("Sie haben leider eine falsche Münze eingeworfen.\n");
	}

	//Ende
	printf("\n\n");
	return 0;
}
