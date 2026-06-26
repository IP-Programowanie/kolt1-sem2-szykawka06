#pragma once
#include "Przycisk.h"

using namespace std;

enum Status {
	widoczne,
	ukryte
};

class OknoGraf {
private:
	char tytulOkna[33];
	int szerokosc;
	Status status;
	OknoGraf* okno;
	Przycisk przycisk;

	static int WartosciDopusznalne[8];
public:
	int getStatus() const;
	void setSzerokosc(int szeroko);
	void setPrzycisk(const char* etyk);
	void renderuj(Przycisk& przycisk);
	void setAll(const char* tytulOk, int szerokosc, Status status, OknoGraf* window, Przycisk &przycisk);

	OknoGraf() = delete;
	OknoGraf(const OknoGraf&) = delete;
	OknoGraf(const OknoGraf&&) = delete;
	OknoGraf& operator = (const OknoGraf&) = delete;

	void setWartosciDopuszczalne(const int Wartosci);

	OknoGraf(const char* tytulOk, int szerokosc, Status status, OknoGraf* window, Przycisk& etyk);
};
