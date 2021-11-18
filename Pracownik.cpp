#include <iostream>
#include <string>
#include "Pracownik.h"

using namespace std;

Pracownik::Pracownik() {
	cout << "Witam jestem nowym pracownikiem." << endl;
}

void Pracownik::setNazwa(std::string nazwa) {
	Nazwa = nazwa;
}

std::string Pracownik::getNazwa() {
	return Nazwa;
}