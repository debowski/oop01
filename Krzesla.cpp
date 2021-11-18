#include <iostream>
#include <string>
#include "Krzesla.h"

Krzesla::Krzesla(int x, string y, string z, string q) {
        setNumer(x);
        setSala(y);
        setKolor(z);
        setProducent(q);
    }

void Krzesla::setNumer(int x) { numer = x; }
int Krzesla::getNazwa() { return numer; }

void Krzesla::setSala(string x) { sala = x; }
string Krzesla::getSala() { return sala; }

void Krzesla::setKolor(string x) { kolor = x; }
string Krzesla::getKolor() { return kolor; }

void Krzesla::setProducent(string x) { producent = x; }
string Krzesla::getProducent() { return producent; }

void Krzesla::przedstawSie() {
    cout << "Krzeslo nr: " << this->numer << endl;
    cout << "sala: " << this->sala << endl;
    cout << "kolor: " << this->kolor << endl;
    cout << "producent: " << this->producent << endl;
}