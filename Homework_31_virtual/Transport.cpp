#include "Transport.h"
#include <iostream>
using namespace std;

Transport::Transport()
{
    fuelType = "";
    loadCapacity = 0;
    fuelSize = 0;
}

Transport::Transport(const string& ft, double lc, double fs)
{
    fuelType = ft;
    loadCapacity = lc;
    fuelSize = fs;
}

string Transport::GetFuelType() const
{
    return fuelType;
}

double Transport::GetLoadCapacity() const
{
    return loadCapacity;
}

double Transport::GetFuelSize() const
{
    return fuelSize;
}

void Transport::SetFuelType(const string& ft)
{
    fuelType = ft;
}

void Transport::SetLoadCapacity(double lc)
{
    loadCapacity = lc;
}

void Transport::SetFuelSize(double fs)
{
    fuelSize = fs;
}

void Transport::SetFuel(const string& ft)
{
    fuelType = ft;
}

void Transport::SetFuel(const string& ft, double fs)
{
    fuelType = ft;
    fuelSize = fs;
}

void Transport::ShowInfo() const
{
    cout << "Type of fuel: " << fuelType << endl;
    cout << "Load capacity " << loadCapacity << endl;
    cout << "Fuel size: " << fuelSize << endl;
}
