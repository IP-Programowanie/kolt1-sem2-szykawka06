#include "Przycisk.h"

Przycisk::Przycisk(const char* etykieta)
{
	setPrzycisk(etykieta);
}

void Przycisk::setPrzycisk(const char* etyk)
{
	etykieta[16] = '\0';
	for (int i = 0; i < 16; i++) {
		etykieta[i] = etyk[i];
	}
}

char* Przycisk::getPrzycisk() const
{
	return etykieta;
}
