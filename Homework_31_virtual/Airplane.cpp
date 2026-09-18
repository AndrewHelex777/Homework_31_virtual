#include "Airplane.h"
#include <iostream>

Airplane::Airplane() : Transport()
{
	passengers = 0;
	maxSpeed = 0;
}

Airplane::Airplane(const string& ft, double lc, double fs, int p, double ms) : Transport(ft, lc, fs)
{
	passengers = p;
	maxSpeed = ms;
}

int Airplane::GetPass() const
{
	return passengers;
}

double Airplane::GetMaxSpeed() const
{
	return maxSpeed;
}

void Airplane::SetPass(int p)
{
	passengers = p;
}

void Airplane::SetMaxSpeed(double ms)
{
	maxSpeed = ms;
}

void Airplane::ShowInfo() const
{
	cout << "Airplane: " << endl;
	Transport::ShowInfo();
	cout << "Number of passengers: " << passengers << endl;
	cout << "Max speed: " << maxSpeed << endl;
}
