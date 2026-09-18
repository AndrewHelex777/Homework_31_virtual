#include <iostream>
#include "Car.h"
#include "Ship.h"
#include "Airplane.h"
#include "Motorcycle.h"
using namespace std;

int main()
{
	int size = 10;
	Transport** ptr = new Transport * [size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = nullptr;
	}
	int count = 0;

	string fueltype;
	double loadcapacity;
	double fuelsize;

	int doors;
	double maxspeed;
	double length;
	int crew;
	int passengers;
	double engineVolume;

	int choice;
	do
	{
		cout << "Transport menu\n";
		cout << "1. Create car\n";
		cout << "2. Create ship\n";
		cout << "3. Create airplane\n";
		cout << "4. Create motorcycle\n";
		cout << "5. Show all transport\n";
		cout << "6. Exit\n";
		cout << ": ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			if (count >= size)
			{
				cout << "Transport array is full\n";
				break;
			}
			cout << "\nType of fuel: ";
			cin >> fueltype;
			cout << "Load capacity (kg): ";
			cin >> loadcapacity;
			cout << "Fuel size: ";
			cin >> fuelsize;
			cout << "Number of doors: ";
			cin >> doors;
			cout << "Max speed (kmh): ";
			cin >> maxspeed;

			ptr[count] = new Car(fueltype, loadcapacity, fuelsize, doors, maxspeed);
			count++;
			cout << "Car created!\n";
			break;
		case 2:
			if (count >= size)
			{
				cout << "Transport array is full\n";
				break;
			}
			cout << "\nType of fuel: ";
			cin >> fueltype;
			cout << "Load capacity (kg): ";
			cin >> loadcapacity;
			cout << "Fuel size: ";
			cin >> fuelsize;
			cout << "Length of ship: ";
			cin >> length;
			cout << "Crew size: ";
			cin >> crew;

			ptr[count] = new Ship(fueltype, loadcapacity, fuelsize, length, crew);
			count++;
			cout << "Ship created!\n";
			break;
		case 3:
			if (count >= size)
			{
				cout << "Transport array is full\n";
				break;
			}
			cout << "\nType of fuel: ";
			cin >> fueltype;
			cout << "Load capacity (kg): ";
			cin >> loadcapacity;
			cout << "Fuel size: ";
			cin >> fuelsize;
			cout << "Number of passengers: ";
			cin >> passengers;
			cout << "Max speed (kmh): ";
			cin >> maxspeed;

			ptr[count] = new Airplane(fueltype, loadcapacity, fuelsize, passengers, maxspeed);
			count++;
			cout << "Airplane created!\n";
			break;
		case 4:
			if (count >= size)
			{
				cout << "Transport array is full\n";
				break;
			}
			cout << "\nType of fuel: ";
			cin >> fueltype;
			cout << "Load capacity (kg): ";
			cin >> loadcapacity;
			cout << "Fuel size: ";
			cin >> fuelsize;
			cout << "Engine volume: ";
			cin >> engineVolume;
			cout << "Max speed (kmh): ";
			cin >> maxspeed;

			ptr[count] = new Motorcycle(fueltype, loadcapacity, fuelsize, engineVolume, maxspeed);
			count++;
			cout << "Motorcycle created!\n";
			break;
		case 5:
			for (int i = 0; i < count; i++)
			{
				cout << "\n" << i + 1 << ".\n";
				ptr[i]->ShowInfo();
				cout << "\n";
			}
			break;
		case 6:
			cout << "Exiting\n";
			break;
		default:
			cout << "Wrong choice\n";
			break;
		}

	} while (choice != 6);

	for (int i = 0; i < count; i++)
	{
		delete ptr[i];
	}
	delete[] ptr;
}