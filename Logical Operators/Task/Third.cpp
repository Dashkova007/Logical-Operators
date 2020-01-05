#include <iostream>
using namespace std;
void third() {
	setlocale(LC_ALL, "RUS");
	int Number, NumberRight, NumberLeft, FirstNumber, SecondNumber, ThirdNumber, FourthNumber, FifthNumber, SixthNumber, AmountLeft, AmountRight;
	cout << "¬ведите число = ";
	cin >> Number;
	if ((Number > 99999) && (Number < 10000000)) {
		NumberLeft = Number / 1000;
		NumberRight = Number - NumberLeft * 1000;

		FirstNumber = NumberRight / 100;
		SecondNumber = (NumberRight - FirstNumber * 100) / 10;
		ThirdNumber = NumberRight - FirstNumber * 100 - SecondNumber * 10;

		FourthNumber = NumberLeft / 100;
		FifthNumber = (NumberLeft - FourthNumber * 100) / 10;
		SixthNumber = NumberLeft - FourthNumber * 100 - FifthNumber * 10;

		AmountLeft = FirstNumber + SecondNumber + ThirdNumber;
		AmountRight = FourthNumber + FifthNumber + SixthNumber;

		if (AmountLeft != AmountRight) cout << "не ";
		cout << "счастливое\n";
	}
	else cout << "число не 6-тизначное\n";
}