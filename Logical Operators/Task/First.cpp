#include<iostream>
using namespace std;
void first() {
	setlocale(LC_ALL, "RUS");
	int number;
	cout << "������� �����: ";
	cin >> number;
	if ((number % 2) != 0) cout << "�� ";
	cout << "������";
	if ((number > 9) && (number < 100)) cout << " ����������";
	if ((number > 99) && (number < 1000)) cout << " �����������";
	cout << endl;
}