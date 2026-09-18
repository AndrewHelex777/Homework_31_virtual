#pragma once
#include "Transport.h"

class Ship : public Transport
{
	double length;
	int crew;
public:
	Ship();
	Ship(const string& ft, double lc, double fs, double l, int c);

	double GetLength() const;
	int GetCrew() const;

	void SetLength(double l);
	void SetCrew(int c);

	void ShowInfo() const;
};