#include "Ship.h"
#include <iostream>

Ship::Ship() : Transport()
{
	length = 0;
	crew = 0;
}

Ship::Ship(const string& ft, double lc, double fs, double l, int c) : Transport(ft, lc, fs)
{
	length = l;
	crew = c;
}

double Ship::GetLength() const
{
	return length;
}

int Ship::GetCrew() const
{
	return crew;
}

void Ship::SetLength(double l)
{
	length = l;
}

void Ship::SetCrew(int c)
{
	crew = c;
}

void Ship::ShowInfo() const
{
	cout << "Ship: " << endl;
	Transport::ShowInfo();
	cout << "Length of ship: " << length << endl;
	cout << "Crew size: " << crew << endl;
}
