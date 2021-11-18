#pragma once
using namespace std;

class Krzesla {

private:
    int numer;
    string sala;
    string kolor;
    string producent;

public:

    Krzesla(int x, string y, string z, string q);
    void setNumer(int x);
    int getNazwa();
    void setSala(string x);
    string getSala();
    void setKolor(string x);
    string getKolor();
    void setProducent(string x);
    string getProducent();

    void przedstawSie();
};