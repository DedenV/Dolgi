#include <iostream>
#include <math.h>
#include <stdio.h>
#include <ctime>
#include <string>

using namespace std;

void ListOfTasks()
{
	cout << "Список заданий : \n\t 1)Посчитать площадь и периметр прямоугольника. Нарисовать получившийся прямоугольник.";
	cout << "\n\t 2)Ввести число n. Вывести первые n чисел Фибоначчи. Посчитать факториал числа n";
	cout << "\n\t 3)Ввести два числа, определить являются ли они простыми. Найти наибольший общий делитель.";
	cout << "\n\t 4)Вывести на экран двоичное представление числа.";
	cout << "\n\t 5)Написать функцию , которая будет генерировать случайные числа. Сгенерировать числа и построить график распределения.";
}

int NumberOfDividers(int a)
{
	int Size = 0;
	for (int i = 2; i <= a / 2; i++)
	{
		if (a % i == 0) Size++;
	}
	return Size;
}

int GenerRandomNumbers(int size, int* array)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
	}
	return *array;
}

void ShowArrayAndSchedule(int size, int* array)
{
	cout << "Сгенерированный массив : ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	char s = '\t';
	cout << "\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9" << endl;
	for (int i = 0; i < size; i++)
	{
		while (array[i] >= 0)
		{
			cout << s;
			array[i]--;
		}
		cout << "A[" << i << "]";
		cout << endl;
	}
}

int main()
{
	system("cls");
	setlocale(LC_ALL, "RU");
	char NumberOfTask;
	ListOfTasks();
	cout << "\n\nВыберите номер задания : ";
	cin >> NumberOfTask;
	switch (NumberOfTask)
	{
	     case '1':
		 {
			 cout << "Введите длину прямоугольника : ";
			 int length, width;
			 cin >> length;
			 cout << "Введите ширину прямоугольника : ";
			 cin >> width;
			 for (int i = 1; i <= length; i++)
			 {
				 for (int j = 1; j <= width; j++)
				 {
					 cout << "*";
				 }
				 cout << endl;
			 }
			 break;
		 }

		 case '2':
		 {
			 int size;
			 cout << "Введите количество первых чисел Фибоначчи : ";
			 cin >> size;
			int	 FirstAuxVariable = 0, SecondAuxVariable = 1, ThirdAuxVariable = 0;
			if (size > 1 && size < 3)
			{
				cout << FirstAuxVariable << " ";
				cout << SecondAuxVariable;
			}
			else if (size == 1)
			{
				cout << FirstAuxVariable << endl;
			}
			else if (size <= 0) 
			{
				cout << "Число меньше , либо равно 0. Конец программы.";
				return 0;
			}
			else if (size > 2)
			{
				cout << FirstAuxVariable << " " << SecondAuxVariable << " ";
				for (int i = 0; i < size-1; i++)
				{
					ThirdAuxVariable = SecondAuxVariable;
					SecondAuxVariable += FirstAuxVariable;
					FirstAuxVariable = ThirdAuxVariable;
					cout << SecondAuxVariable << " ";
				}
				cout << endl;
			}
			break;
		 }

		 case '3':
		 {
			 cout << "Введите два числа : ";
			 int number1, number2 , size1 , size2;
			 cin >> number1 >> number2;
			 size1 = NumberOfDividers(number1);
			 size2 = NumberOfDividers(number2);
			 if (number1 == 1 || number1 == 0) cout << "Первое число не является простым." << endl;
			 else if (size1 == 0) cout << "Первое число является простым." << endl;
			 else if (size1 > 0) cout << "Первое число не является простым." << endl;
			 if (number2 == 1 || number2 == 0) cout << "Второе число не является простым." << endl;
			 else if (size2 == 0) cout << "Второе число является простым." << endl;
			 else if (size2 > 0) cout << "Второе число не является простым." << endl;
			 int Max_Divider = 0;
			 if (number1 >= number2) Max_Divider = number1 / 2;
			 else if (number2 > number1) Max_Divider = number2 / 2;
			 for (int i = 1; i <= Max_Divider; i++)
			 {
				 if (number1 % i == 0 && number2 % i == 0) Max_Divider = i;
			 }
			 cout << "Максимальный общий делитель : " << Max_Divider << endl;
			 break;
		 }
		 case '4':
		 {
			 /*
			 подсвечиваются зеленые ошибки , не знаю как фиксить, поэтому через строку сделал.

			 cout << "Введите число , которое нужно будет перевести в двоичную систему : ";
			 int Number;
			 cin >> Number;
			 int CopyNumber = Number,SizeOfArray=0, CopyNumber2 = Number;
			 //определение размера массива
			 while (CopyNumber > 0)
			 {
				 CopyNumber /= 2;
				 SizeOfArray++;
			 }
			 //создание динамического массива
			 SizeOfArray--;
			 int* arr = new int[SizeOfArray];
			 //запись в массив остатков от деления на 2
			 for (int i = 0; i <= SizeOfArray; i++)
			 {
				  if (CopyNumber2 % 2 == 0)
				 {
					 arr[i] = 0;
					 CopyNumber2 /= 2;
					 continue;
				 }
				 else if (CopyNumber2 % 2 == 1)
				 {
					 arr[i] = 1;
					 CopyNumber2 = CopyNumber2/2;
					 continue;
				 }
			 }
			 cout << endl;
			 //вывод с конца массива
			 for (int i = SizeOfArray; i>=0; i--)
			 {
				 cout << arr[i];
			 }
			 cout << endl;
			 delete[] arr;
			 break;
			 */
			 cout << "Введите число , которое нужно будет перевести в двоичную систему : ";
			 int numberint;
			 string numberstr;

			 cin >> numberint;
			 while (numberint > 0)
			 {
				 numberstr += to_string(numberint % 2);
				 numberint /= 2;
			 }
			 cout << "Число в двоичной системе : ";
			 for (int i = numberstr.length() - 1; i >= 0; i--)
			 {
				 cout << numberstr[i];
			 }
		 }

		 case '5' :
		 {
			 int size;
			 cout << "Введите размер массива : ";
			 cin >> size;
			 int* Array = new int[size];
			 GenerRandomNumbers(size, Array);
			 ShowArrayAndSchedule(size, Array);
		 }
	}
}