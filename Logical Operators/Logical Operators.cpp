﻿#include <iostream>
using namespace std;

//инициализация функций, которые находяться в другом файле
void first();
void second();
void third();
void fourth();

void main() {
	setlocale(LC_ALL, "RUS");
	int value;
	string  arr[] = {
		"Задание №1. Дано целое число, лежащее в диапазоне 1-999. Вывести его строку описание вида 'четное двузначное число', 'нечетное трехзначное число' и т. д.",
		"Задание №2. Пользователь вводит время в секундах, прошедшее с начала дня. Посчитать, сколько осталось до полуночи.",
		"Задание №3. Пользователь вводит с клавиатуры целое шестизначное число. Написать программу, которая определяет, является ли введенное число – счастливым (Счастливым считается шестизначное число, у которого сумма первых 3 цифр равна сумме вторых трех цифр). Если пользователь ввел не шестизначное число – сообщение об ошибке.",
		"Задание №4. Грузовой самолет должен пролететь с грузом из пункта А в пункт С через пункт В. Емкость бака для топлива у самолета – 300 литров. Потребление топлива на 1 км в зависимости от веса груза у самолета следующее:\n- до 500 кг: 1 литров/км\n- до 1000 кг : 4 литров/км\n- до 1500 кг : 7 литров/км\n- до 2000 кг : 9 литров/км.\n- более 2000 кг – самолет не поднимает.\nПользователь вводит расстояние между пунктами А и В, и расстояние между пунктами В и С, а также вес груза.Программа должна рассчитать какое минимальное количество топлива необходимо для дозаправки самолету в пункте В, чтобы долететь из пункта А в пункт С.В случае невозможности преодолеть любое из расстояний – программа должна вывести сообщение о невозможности полета по введенному маршруту."
	};
	for (int i = 0; i < 4; i++) cout << arr[i] << "\n\n";
	cout << "Выберите задачу = ";
	cin >> value;
	system("cls");
	switch (value) {
	case 1: first(); break;
	case 2: second(); break;
	case 3: third(); break;
	case 4: fourth(); break;
	default: break;
	}
	system("pause");
}