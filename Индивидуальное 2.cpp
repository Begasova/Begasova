#include <iostream> 

using namespace std;

double Cos(double, double);
double** AllocateMamory(int n);
void DeleteMemory(double** matrix, int n);
void DisplayMatrix(int** arr, int n);
void LibraryMatrix(double**, int, double);
void RowMatrix(double**, int, double);

int main()
{
	int n;
	{
		cout << "Enter size of matrix: ";
		cin >> n;
		if (n < 0)
			cout << "Error!";
	}
	double eps;
	cout << "Enter accuracy: ";
	cin >> eps;

	double** arr = AllocateMamory(n);
	double** arr2 = AllocateMamory(n);

	RowMatrix(arr, n, eps);
	LibraryMatrix(arr2, n, eps);
	cout << "Decomposition matrix" << endl;

	void DisplayMatrix(int** arr, int n);
	cout << "Libary matrix" << endl;
	void DisplayMatrix(int** arr2, int n);

	DeleteMemory(arr, n);
	DeleteMemory(arr2, n);
	system("pause");

}

double** AllocateMamory(int n)
{
	double** arr = new double*[n];
	for (int i = 0; i < n; i++)
		arr[i] = new double[n];
	return arr;
}

void DeleteMemory(double** arr, int n)
{
	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete arr;
}

void DisplayMatrix(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout.width(3);
			cout << arr[i][j];
		}
		cout << endl;
	}
}

double Cos(double eps, double x)
{
	double ad = 1, s = 0;
	int i = 1, p = 1;
	while (abs(ad) > eps)
	{
		s += p*ad;//сумма
		ad *= (x*1.0 / (i*1.0));//слагаемое
		i += 2;//знаменатель
		p *= -1;//переключатель знака
		ad *= x / (i - 1);

	}
	return s;
}

void RowMatrix(double**arr, int n, double eps)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) arr[i][j] = i + j;
			else
				arr[i][j] = ((i + j)*(i + j) + Cos(eps, 2 * j*1.0) - Cos(eps, 2 * i*1.0))*1.0 / (Cos(eps, (i + j)*1.0) + ((i + 1)*(i + 1)))*1.0;

		}
	}
}
void LibraryMatrix(double**arr, int n, double eps)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)arr[i][j] = i + j;
			else arr[i][j] = ((i + j)*(i + j) + cos(2 * j) - cos(2 * i))*1.0 / (cos(i + j) + (i + 1)*(i + 1))*1.0;
		}
	}
}
