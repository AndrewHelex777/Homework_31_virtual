#pragma once
#include "Transport.h"

class Car : public Transport
{
	int doors;
	double maxSpeed;
public:
	Car();
	Car(const string& ft, double lc, double fs, int d, double ms);

	int GetDoors() const;
	double GetMaxSpeed() const;

	void SetDoors(int d);
	void SetMaxSpeed(double ms);

	void ShowInfo() const;
};