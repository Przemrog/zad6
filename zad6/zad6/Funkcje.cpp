#include <iostream>
#include "Funkcje.h"

using namespace std;

// Zad 1

/*

float poleKola(float r) {
	return r * r * 3.14;
}

float obwodKola(float r) {
	return 2 * r * 3.14;
}

float poleProstokata(float a, float b) {
	return a * b;
}

float obwodProstokata(float a, float b) {
	return 2 * a + 2 * b;
}

float poleTrojkota(float a, float r) {
	return 0.5 * a * r;
}

float obwodTrojkota(float a, float b, float c) {
	return a + b + c;
}

float poleSzescianu(float a) {
	return 6 * a;
}

float objetoscSzescianu(float a) {
	return a * a * a;
}

float poleWalca(float r, float h) {
	return 2 * 3.14 * r * r + 2 * 3.14 * r * h;
}

float objetoscWalca(float r, float h) {
	return 3.14 * r * r * h;
}


*/

// Zad 2


/*
bool LiczbaPierwsza(int liczba) {
	int a = 0;

	if (liczba == 0 || liczba == 1) {
		return 0;
	}

	for (int i = 2; i < liczba; i++)
	{
		if (liczba % i == 0) {
			a = 1;
			break;
		}
	}

	if (a == 0) {
		return 1;
	}
	else if (a == 1) {
		return 0;
	}
}
*/

// Zad 3

/*

void konwersja(int a)
{
	int decNaBin[32];

	int i = 0;
	while (a > 0) {

		decNaBin[i] = a % 2;
		a = a/ 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--){
		cout << decNaBin[j];
	}
}


*/


// Zad 4

int dwusilnia(int n) {

	int a = 1;

	for (n; n > 1; n -= 2){
	a *= n;
	}
	return a;
}