#include <iostream>
//Zadanie str 38 3g

using namespace std;
const int L = 100, M = 50;
void DisplayMatrix(int matrix[][M], int n, int m);
void EnterMatrix(int matrix[][M], int n, int m);
void RandomMatrix(int matrix[][M], int n, int m);
void Swap(int& a, int& b);
void Transpouse(int matrix[][M], int n);
int main()
{
	int matrix[L][M] = { { 0 } };
	int  n, m;
	cout << "Enter n: ";
	cin >> n;
	m = n;
	{
		for (int i = 0; i < n; i++)

			for (int j = 0; j < n; j++)
			{
				if (i == j )
					matrix[i][j] = i + 1;
				if (i == m - j - 1)
					matrix[i][j] = n - i ;
			}
	}
	DisplayMatrix(matrix, n, m);
	system("pause");
	return 0;
}

void Transpouse(int matrix[][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			Swap(matrix[i][j], matrix[j][i]);
		}
	}
}

void EnterMatrix(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "[" << (i + 1) << "][" << (j + 1) << "] = ";
			cin >> matrix[i][j];
		}
	}
}
void RandomMatrix(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//matrix[i][j] = rand() % 100;
			matrix[i][j] = i + 1;
		}
	}
}


void DisplayMatrix(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			cout.width(); //������������ �� ������� ����
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}