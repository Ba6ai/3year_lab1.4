#include <iostream>
#include <Windows.h>

using namespace std;

int matrix[4][4];

int main()
{
	setlocale(LC_ALL, "RU");

	// Заполенение матрицы рандомными значениями
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matrix[i][j] = rand() % 100;
		}
	}



	// Вывод матрицы
	cout << "Вывод матрицы\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}
