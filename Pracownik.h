#pragma once
#include <string>
using namespace std;


class Pracownik
{
private:
	std::string Nazwa;

public:
	Pracownik();
	void setNazwa(std::string nazwa);
	std::string getNazwa();

};

