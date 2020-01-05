#include <iostream>
using namespace std;
void fourth() {
	setlocale(LC_ALL, "RUS");
	int Tank = 300, AB, BC, CargoWeight, Consumption = 0, FuelConsumption_AB, FuelConsumption_BC, Refuel;
	cout << "Введите расстояние от А до Б = ";
	cin >> AB;
	cout << "Введите расстояние от В до С = ";
	cin >> BC;
	cout << "Введите вес груза = ";
	cin >> CargoWeight;
	if (CargoWeight <= 2000) {
		if (CargoWeight > 1500) {
			cout << "до 2000 кг расход 9 л/км.\n";
			Consumption = 9;
		}
		else {
			if (CargoWeight > 1000) {
				cout << "до 1500 кг расход 7 л/км.\n";
				Consumption = 7;
			}
			else {
				if (CargoWeight > 500) {
					cout << "до 1000 кг расход 4 л/км.\n";
					Consumption = 4;
				}
				else if (CargoWeight <= 500) {
					cout << "до 500 кг расход 1 л/км.\n";
					Consumption = 1;
				}
			}
		}
		FuelConsumption_AB = AB * Consumption;
		FuelConsumption_BC = BC * Consumption;
		if ((FuelConsumption_AB <= Tank) && (FuelConsumption_BC <= Tank)) {
			if ((FuelConsumption_AB + FuelConsumption_BC) <= Tank) cout << "Заправляться не надо\n";
			else {
				Refuel = (Tank - FuelConsumption_AB - FuelConsumption_BC) * (-1);
				cout << "Дозаправиться на " << Refuel << " литров\n";
			}
		}
		else cout << "Полет не возможен\n";
	}
	else cout << "Большая нагрузка\n";
}