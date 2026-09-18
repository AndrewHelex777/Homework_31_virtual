#pragma once
#include <string>
using namespace std;
class Transport
{
protected:
	string fuelType;
	double loadCapacity;
	double fuelSize;
public:
	Transport();
	Transport(const string& ft, double lc, double fs);

	string GetFuelType() const;
	double GetLoadCapacity() const;
	double GetFuelSize() const;

	void SetFuelType(const string& ft);
	void SetLoadCapacity(double lc);
	void SetFuelSize(double fs);

	void SetFuel(const string& ft);
	void SetFuel(const string& ft, double fs);

	virtual void ShowInfo() const;
};