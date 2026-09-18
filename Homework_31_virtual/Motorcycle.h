#pragma once
#include "Transport.h"

class Motorcycle : public Transport
{
	double engineVolume;
	double maxSpeed;
public:
	Motorcycle();
	Motorcycle(const string& ft, double lc, double fs, double ev, double ms);

	double GetEngineVolume() const;
	double GetMaxSpeed() const;

	void SetEngineVolume(double ev);
	void SetMaxSpeed(double ms);

	void ShowInfo() const;
};