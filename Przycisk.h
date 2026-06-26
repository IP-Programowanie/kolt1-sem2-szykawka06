#pragma once


class Przycisk {
private:
	char etykieta[17];
public:
	Przycisk(const char* etyk);
	void setPrzycisk(const char* etyk);
	char* getPrzycisk() const;

	Przycisk() = delete;
};