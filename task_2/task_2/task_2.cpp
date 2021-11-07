#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

void CoutTasks()
{
	cout << "Список заданий : \n\t1)Определить является трехзначное число четным или нечетным.";
	cout << "\n\t2) Найти среднее арифмитичесое трех составляющих его цифр";
	cout << "\n\t3)Пользователь вводит с консоли номер месяца. По номеру месяца вывести его название (через switch-case)";
	cout << "\n\t4)По номеру месяца вывести пору года(через switch-case)";
	cout << "\n\t5)По номеру года определить название животного , соответствующего эму году." << endl;
}

int main()
{
	system("cls");
	setlocale(LC_ALL, "Ru");
	CoutTasks();
	cout << "Выберите номер задания : ";
	char NumbOfTask;
	cin >> NumbOfTask;
	switch (NumbOfTask)
	{
	case '1':
	{
		int ThreeDigitNumber;
		cout << "Введите трехзначное число : ";
		cin >> ThreeDigitNumber;
		if (ThreeDigitNumber % 2 == 0) cout << "Число является четным." << endl;
		else cout << "Число является нечетным." << endl;
		break;
	}


	case '2':
	{
		int ThreeDigitNumber;
		double result = 0;
		cout << "Введите трехзначное число : ";
		cin >> ThreeDigitNumber;
		for (int divider = 100; divider >= 1; divider /= 10)
		{
			result += (ThreeDigitNumber / divider) % 10 / 3.;
		}
		cout << "Среднее арифметическое трех членов = " << result << endl;
		break;
	}


	case '3':
	{
		char NumberOfMonth;
		cout << "Введите номер месяца : ";
		cin >> NumberOfMonth;
		switch (NumberOfMonth)
		{
		case '1':
		{
			cout << "Январь." << endl;
			break;
		}
		case '2':
		{
			cout << "Февраль." << endl;
			break;
		}
		case '3':
		{
			cout << "Март." << endl;
			break;
		}
		case '4':
		{
			cout << "Апрель." << endl;
			break;
		}
		case '5':
		{
			cout << "Май." << endl;
			break;
		}
		case '6':
		{
			cout << "Июнь." << endl;
			break;
		}
		case '7':
		{
			cout << "Июль." << endl;
			break;
		}
		case '8':
		{
			cout << "Август." << endl;
			break;
		}
		case '9':
		{
			cout << "Сентябрь." << endl;
			break;
		}
		case '10':
		{
			cout << "Октябрь." << endl;
			break;
		}
		case '11':
		{
			cout << "Ноябрь." << endl;
			break;
		}
		case '12':
		{
			cout << "Декабрь." << endl;
			break;
		}
		}
	}
		case '4':
		{
			char NumberOfMonth;
			cout << "Введите номер месяца : ";
			cin >> NumberOfMonth;
			switch (NumberOfMonth)
			{
			case '1':
			{
				cout << "Зима." << endl;
				break;
			}
			case '2':
			{
				cout << "Зима." << endl;
				break;
			}
			case '3':
			{
				cout << "Весна." << endl;
				break;
			}
			case '4':
			{
				cout << "Весна." << endl;
				break;
			}
			case '5':
			{
				cout << "Весна." << endl;
				break;
			}
			case '6':
			{
				cout << "Лето." << endl;
				break;
			}
			case '7':
			{
				cout << "Лето." << endl;
				break;
			}
			case '8':
			{
				cout << "Лето." << endl;
				break;
			}
			case '9':
			{
				cout << "Осень." << endl;
				break;
			}
			case '10':
			{
				cout << "Осень." << endl;
				break;
			}
			case '11':
			{
				cout << "Осень." << endl;
				break;
			}
			case '12':
			{
				cout << "Зима." << endl;
				break;
			}
			}
		}
		case '5':
		{
			int NumberOfYear;
			cout << "Введите номер года (1900-1960) : ";
			cin >> NumberOfYear;
			string Year[12]{ "Крыса", "Бык" , "Тигр" , "Кот" , "Дракон" , "Змея" , "Лошадь" , "Коза" , "Обезьяна" , "Петух", "Собака", "Свинья"};
			for (int i = 0, From1900 = 1900; From1900 <= NumberOfYear; i++ ,From1900++)
			{
				if (From1900 == NumberOfYear)
				{
					cout << Year[i] << endl;
					break;
				}
				if (i == 11) i = -1;
			}
		}
		
		
	}
}