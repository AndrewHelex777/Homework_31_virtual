#pragma once
#include "Transport.h"

class Airplane : public Transport
{
	int passengers;
	double maxSpeed;
public:
	Airplane();
	Airplane(const string& ft, double lc, double fs, int p, double ms);

	int GetPass() const;
	double GetMaxSpeed() const;

	void SetPass(int p);
	void SetMaxSpeed(double ms);

	void ShowInfo() const;
};