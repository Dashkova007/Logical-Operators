#include <iostream>
using namespace std;
void fourth() {
	setlocale(LC_ALL, "RUS");
	int Tank = 300, AB, BC, CargoWeight, Consumption = 0, FuelConsumption_AB, FuelConsumption_BC, Refuel;
	cout << "������� ���������� �� � �� � = ";
	cin >> AB;
	cout << "������� ���������� �� � �� � = ";
	cin >> BC;
	cout << "������� ��� ����� = ";
	cin >> CargoWeight;
	if (CargoWeight <= 2000) {
		if (CargoWeight > 1500) {
			cout << "�� 2000 �� ������ 9 �/��.\n";
			Consumption = 9;
		}
		else {
			if (CargoWeight > 1000) {
				cout << "�� 1500 �� ������ 7 �/��.\n";
				Consumption = 7;
			}
			else {
				if (CargoWeight > 500) {
					cout << "�� 1000 �� ������ 4 �/��.\n";
					Consumption = 4;
				}
				else if (CargoWeight <= 500) {
					cout << "�� 500 �� ������ 1 �/��.\n";
					Consumption = 1;
				}
			}
		}
		FuelConsumption_AB = AB * Consumption;
		FuelConsumption_BC = BC * Consumption;
		if ((FuelConsumption_AB <= Tank) && (FuelConsumption_BC <= Tank)) {
			if ((FuelConsumption_AB + FuelConsumption_BC) <= Tank) cout << "������������ �� ����\n";
			else {
				Refuel = (Tank - FuelConsumption_AB - FuelConsumption_BC) * (-1);
				cout << "������������� �� " << Refuel << " ������\n";
			}
		}
		else cout << "����� �� ��������\n";
	}
	else cout << "������� ��������\n";
}