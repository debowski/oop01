#include <iostream>
#include <string>

using namespace std;

class Krzesla {

private:
    int numer;
    string sala;
    string kolor;
    string producent;

public:

    Krzesla(int x, string y, string z, string q) {
        setNumer(x);
        setSala(y);
        setKolor(z);
        setProducent(q);
    }

    void setNumer(int x) {numer = x;}
    int getNazwa() {return numer;}

    void setSala(string x) { sala = x; }
    string getSala() { return sala; }

    void setKolor(string x) { kolor = x; }
    string getKolor() { return kolor; }

    void setProducent(string x) { producent = x; }
    string getProducent() { return producent; }

    void przedstawSie() {
        cout << "Krzeslo nr: " << this->numer << endl;
        cout << "sala: " << this->sala << endl;
        cout << "kolor: " << this->kolor << endl;
        cout << "producent: " << this->producent << endl;
    }
};


int main()
{
    Krzesla k1(1, "11", "naturalny", "Drewnorob");
    k1.przedstawSie();
}