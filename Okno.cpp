#include "Okno.h"
#include <iostream>
#include <stdexcept>
#include <cassert>

using namespace std;

int OknoGraf::getStatus() const
{
	return Status;
}

void OknoGraf::setSzerokosc(int szeroko)
{
	assert (szeroko < 1920 || szeroko >= 0);
	
	for (int i = 0; i < 8; i++) {
		if (WartosciDopusznalne[i] == szeroko) {
			szerokosc = szeroko;
		}
	}
}

void OknoGraf::setPrzycisk(const char* etyk)
{
	setPrzycisk(etyk);
}


void OknoGraf::renderuj(Przycisk &przycisk)
{
	if (Status == ukryte) {
		cout << " ";
	}
	else if (Status == widoczne && przycisk==nullptr) {
		cout << "[]";
	}
	else if (Status == widoczne && przycisk != nullptr) {
		cout << "[" << przycisk.getPrzycisk() << "]";
	}
}

void OknoGraf::setAll(const char* tytulOk, int szerokosc, Status status, OknoGraf* window, Przycisk& przycisk)
{
	
	for (int i = 0; i < 33; i++) {
		tytulOkna[i] = tytulOk[i];
	}
	setSzerokosc(szerokosc);
	
	okno = window;
	przycisk.setPrzycisk(przycisk);
}

void OknoGraf::setWartosciDopuszczalne(const int Wartosci)
{
	WartosciDopusznalne[0] = 1920;
	WartosciDopusznalne[1] = 1666;
	WartosciDopusznalne[2] = 1555;
	WartosciDopusznalne[3] = 1444;
	WartosciDopusznalne[4] = 1333;
	WartosciDopusznalne[5] = 1222;
	WartosciDopusznalne[6] = 1111;
	WartosciDopusznalne[7] = 1000;
		
}

OknoGraf::OknoGraf(const char* tytulOk, int szerokosc, Status status, OknoGraf* window, Przycisk& etyk)
	:tytulOkna{ 0 },
	okno(nullptr);
{
	setSzerokosc(szerokosc);
}
	

