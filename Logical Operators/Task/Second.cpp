#include <iostream>
using namespace std;
void second() {
	setlocale(LC_ALL, "RUS");
	int SecondsEntered, CurrentHours, CurrentMinutes, CurrentSeconds, TotalTime, TimeRemaining, HoursRemaining, MinutesRemaining, SecondsRemaining;
	cout << "Введите количество секунд (max = 86400) = ";
	cin >> SecondsEntered;
	CurrentHours = SecondsEntered / 3600;
	CurrentSeconds = SecondsEntered - (CurrentHours * 3600);
	CurrentMinutes = CurrentSeconds / 60;
	CurrentSeconds = CurrentSeconds - (CurrentMinutes * 60);
	cout << "Сейчас " << CurrentHours << ":" << CurrentMinutes << ":" << CurrentSeconds << "\n";

	TotalTime = 24 * 60 * 60;
	TimeRemaining = TotalTime - SecondsEntered;
	HoursRemaining = TimeRemaining / 3600;
	SecondsRemaining = TimeRemaining - (HoursRemaining * 3600);
	MinutesRemaining = SecondsRemaining / 60;
	SecondsRemaining = SecondsRemaining - (MinutesRemaining * 60);
	cout << "До полуночи осталось " << HoursRemaining << ":" << MinutesRemaining << ":" << SecondsRemaining << "\n";
}