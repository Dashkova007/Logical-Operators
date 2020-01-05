#include<iostream>
using namespace std;
void first() {
	setlocale(LC_ALL, "RUS");
	int number;
	cout << "¬ведите число: ";
	cin >> number;
	if ((number % 2) != 0) cout << "не ";
	cout << "четное";
	if ((number > 9) && (number < 100)) cout << " двузначное";
	if ((number > 99) && (number < 1000)) cout << " трехзначное";
	cout << endl;
}