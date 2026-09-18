#include "Motorcycle.h"
#include <iostream>

Motorcycle::Motorcycle() : Transport()
{
	engineVolume = 0;
	maxSpeed = 0;
}

Motorcycle::Motorcycle(const string& ft, double lc, double fs, double ev, double ms) : Transport(ft, lc, fs)
{
	engineVolume = ev;
	maxSpeed = ms;
}

double Motorcycle::GetEngineVolume() const
{
	return engineVolume;
}

double Motorcycle::GetMaxSpeed() const
{
	return maxSpeed;
}

void Motorcycle::SetEngineVolume(double ev)
{
	engineVolume = ev;
}

void Motorcycle::SetMaxSpeed(double ms)
{
	maxSpeed = ms;
}

void Motorcycle::ShowInfo() const
{
	cout << "Motorcycle: " << endl;
	Transport::ShowInfo();
	cout << "Engine volume: " << engineVolume << endl;
	cout << "Max speed: " << maxSpeed << endl;
}
