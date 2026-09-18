#include "Car.h"
#include <iostream>

Car::Car() : Transport()
{
    doors = 4;
    maxSpeed = 180;
}

Car::Car(const string& ft, double lc, double fs, int d, double ms) : Transport(ft, lc, fs)
{
    doors = d;
    maxSpeed = ms;
}

int Car::GetDoors() const
{
    return doors;
}

double Car::GetMaxSpeed() const
{
    return maxSpeed;
}

void Car::SetDoors(int d)
{
    doors = d;
}

void Car::SetMaxSpeed(double ms)
{
    maxSpeed = ms;
}

void Car::ShowInfo() const
{
    cout << "Car: " << endl;
    Transport::ShowInfo();
    cout << "Number of doors: " << doors << endl;
    cout << "Max speed: " << maxSpeed << endl;
}
