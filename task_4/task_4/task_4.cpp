#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

void coutTasks()
{
	cout << "Список заданий : \n\t1)Вывести на экран матрицу n*k.";
	cout << "\n\t2)Найти сумму всех элементов массива. Найти среднее значение элементов.";
	cout << "\n\t3)Перемножить две матрицы. Вывести на экран результирующую матрицу и матрицы, которые перемножались.";
	cout << "\n\t4)Удалить из массива повторяющиеся элементы. Найти медиану массива. Без использования дополнительных массивов.";
	cout << "\n\t5)Найти медиану матрицы. Найти наибольший и наименьший элементы матрицы .";
	cout << endl;
}

int** FillMatrix(int line,int cow)
{
	srand(time(NULL));
	double Max_Size = 9.00, Min_Size = -9.00;
	int** array = new int* [line];
	for (int i = 0; i < cow; i++)
	{
		array[i] = new int[cow];
	}
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < cow; j++)
		{
			array[i][j] = (double)rand() / RAND_MAX * (Max_Size - Min_Size) + Min_Size;
		}
	}
	return array;
}

void coutMatrix(int**array, int lines, int cows)
{
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < cows; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int* fillArray(int* Arr, int size)
{
	srand(time(NULL));
	double Max_Size = 9.00, Min_Size = -9.00;
	for (int i = 0; i <= size; i++)
	{
			Arr[i] = (double)rand() / RAND_MAX * (Max_Size - Min_Size) + Min_Size;
	}
	return Arr;
}

void ShowArray(int* Arr, int size)
{
	for (int i = 0; i <= size; i++)
	{
		cout << Arr[i] << " ";
	}
}

void DeleteArray(int* Arr)
{
	 delete[] Arr;
}

int main()
{
	setlocale(LC_ALL, "RU");
	system("cls");
	coutTasks();
	cout << "Выберите номер задания : ";
	char NumberOfTask;
	cin >> NumberOfTask;
	switch (NumberOfTask)
	{
	     case '1':
		 {
			 cout << "Введит кол-во строк матрицы : ";
			 int lines;
			 cin >> lines;
			 cout << "Введите кол-во столбцов матрицы : ";
			 int cows;
			 cin >> cows;
			 FillMatrix(lines, cows);
			 coutMatrix(FillMatrix(lines, cows), lines, cows);
			 break;
		 }
		 case '2' :
		 {
			 cout << "Введите размерность массива : ";
			 int size;
			 cin >> size;
			 size--;
			 int* Arr = new int[size];
			 fillArray(Arr, size);
			 ShowArray(fillArray(Arr, size), size);
			 DeleteArray(fillArray(Arr, size));
			 break;
		 }
		 case '3' :
		 {
			 /*p.s. лень было пихать по функциям*/
			 srand(time(NULL));
			 int row1, row2, col1, col2;
			 double Max_Size = 9.00, Min_Size = -9.00;
			 cout << "Введите количество строк в первой матрице: ";
			 cin >> row1;
			 cout << endl << "Введите количество столбцов в первой матрице: ";
			 cin >> col1;

			 cout << endl << "Введите количество строк во второй матрице: ";
			 cin >> row2;
			 cout << endl << "Введите количество столбцов во второй матрице: ";
			 cin >> col2;

			 int** a = new int* [row1];
			 for (int i = 0; i < row1; i++)
				 a[i] = new int[col1];
			 int** b = new int* [row2];


			 for (int i = 0; i < row2; i++)
				 b[i] = new int[col2];

			 for (int i = 0; i < row1; i++)
			 {
				 for (int j = 0; j < col1; j++)
				 {
					 a[i][j] = (double)rand() / RAND_MAX * (Max_Size - Min_Size) + Min_Size;
				 }
			 }

			 cout << endl;

			 for (int i = 0; i < row2; i++)
			 {
				 for (int j = 0; j < col2; j++)
				 {
					 b[i][j] = (double)rand() / RAND_MAX * (Max_Size - Min_Size) + Min_Size;
				 }
			 }

			 cout <<"\nПервая матрица: " << endl;

			 for (int i = 0; i < row1; i++)
			 {
				 for (int j = 0; j < col1; j++)
				 {
					 cout << a[i][j] << " ";
				 }
				 cout << endl;
			 }

			 cout << "\nВторая матрица: " << endl;

			 for (int i = 0; i < row2; i++)
			 {
				 for (int j = 0; j < col2; j++)
				 {
					 cout << b[i][j] << " ";
				 }
				 cout << endl;
			 }

			 if (col1 != row2)
				 cout << "Умножение невозможно!";
			 else
			 {
				 int** c = new int* [row1];
				 for (int i = 0; i < row1; i++)
				 {
					 c[i] = new int[col2];
					 for (int j = 0; j < col2; j++)
					 {
						 c[i][j] = 0;
						 for (int k = 0; k < col1; k++)
							 c[i][j] += a[i][k] * b[k][j];
					 }
				 } 

				 cout << "\nМатрица произведения: " << endl;
				 for (int i = 0; i < row1; i++)
				 {
					 for (int j = 0; j < col2; j++)
						 cout <<c[i][j] << " ";
					 cout << endl;
				 }
			 }

			 for (int i = 0; i < row1; i++)
				 delete[] a[i];
			 for (int i = 0; i < row2; i++)
				 delete[] b[i];

			 delete[] a;
			 delete[] b;
			 break;
		 }
		 case '4':
		 {
			 int size;
			 cout << "Введите размер массива : ";
			 cin >> size;
			 int* arr = new int[size];
			 fillArray(arr, size);
			 for (int i = 0; i < size-1; i++)
			 {
				 for (int j = 0; j < size-1; j++)
				 {
					 if (arr[j]>arr[j+1])
					 {
						 int p = arr[j];
						 arr[j] = arr[j + 1];
						 arr[j + 1] = p;
					 }
				 }
			 }
			 cout << "Отсортированный массив : ";
			 for (int i = 0; i < size; i++)
			 {
				 cout << arr[i] << " ";
			 }
			 cout << "\nМедиана массива : ";
			 if (size % 2 == 1)
			 {
				 cout << arr[size / 2] << endl;
			 }
			 else if (size / 2 == 1)
			 {
				 cout << (arr[size - 1] + arr[size - 2]) / 2 << endl;
			 }
			 else if (size % 2 == 0 && size / 2 != 1)
			 {
				 int p1,p2;
				 int i = size / 2;
				 p1 = arr[(size / 2)-1];
				 p2 = arr[i];
				 cout << (p1+p2)/2 << endl;
			 }
			 break;
		 }
		 case '5':
		 {
			/* P.S полная отмена. 
			srand(time(NULL));
			 double Max_Size = 9.00, Min_Size = -9.00;
			 cout << "Введите количество строк матрицы : ";
			 int row1;
			 cin >> row1;
			 cout << "Введите количество столбцов матрицы : ";
			 int col1;
			 cin >> col1;
			 int** Matrix1 = new int* [row1];
			 for (int i = 0; i < col1; i++)
				 Matrix1[i] = new int[col1];

			 for (int i = 0; i < row1; i++)
			 {
				 for (int j = 0; j < col1; j++)
				 {
					 Matrix1[i][j] = (double)rand() / RAND_MAX * (Max_Size - Min_Size) + Min_Size;
				 }
			 }
			 cout << "Матрица : " << endl;
			 for (int i = 0; i < row1; i++)
			 {
				 for (int j = 0; j < col1; j++)
				 {
					cout << Matrix1[i][j] << " ";
				 }
				 cout << endl;
			 }
			 double Max_Value = -10.00, Min_Value = 10.00;
			 for (int i = 0; i < row1; i++)
			 {
				 for (int j = 0; i < col1; j++)
				 {
					 if (Matrix1[i][j] > Max_Value)
					 {
						 Max_Value = Matrix1[i][j];
					 }
					 if (Matrix1[i][j] < Min_Value)
					 {
						 Min_Value = Matrix1[i][j];
					 }
				 }
			 }
			 cout << "Максимальный элемент матрицы : " << Max_Value<<endl;
			 cout << "Минимальный элемент матрицы : " << Min_Value << endl;
			 break;
			 */
		 }
	}
}