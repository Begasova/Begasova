#include <iostream>

using namespace std;

void EnterArray(int a[], int n);
void DisplayArray(int a[], int n);
void F1(int a[], int n, int&less, int&set);
void F2(int a[], int n, int&less, int&set);

const int  N = 100;

int main()
{
	int a[N] = { 0 };
	int n, i;
	while (true)
	{
		cout << "Enter n > 0 and n <= " << N << ": ";
		cin >> n;
		if (n > 0 && n <= N)
			break;
	}
	cout << "Source array" << endl;
	EnterArray(a, n);
	int less = 0, set;
	cout << "Enter set number: ";
	cin >> set;
	F1(a, n, less, set);
	cout << "The numbers who less than set: " << less << endl;
	F2(a, n, less, set);
	system("pause");
	return 0;
}

void F1(int a[], int n, int&less, int&set)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < set)
		{
			less++;
		}
	}
}


void F2(int a[], int n, int&less, int&set)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < set)
		{
			cout << a[i] << ' ' << endl;
		}
	}
}

void EnterArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << (i + 1) << "] = ";
		cin >> a[i];
	}
}