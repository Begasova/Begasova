#include <iostream>

using namespace std;

void EnterArray(int a[], int n);
void RandomArray(int a[], int n);
void DisplayArray(int a[], int n);
void PosNeg(int a[], int n, int&pos, int&neg, int&cpos, int&cneg);

const int  N = 100;

int main()
{
	int a[N] = { 0 };
	int n;
		while (true)
		{
			cout << "Enter n > 0 and n <= " << N << ": ";
			cin >> n;
			if (n > 0 && n <= N)
				break;
		}
		RandomArray(a, n);
		cout << "Source array" << endl;
		EnterArray(a, n);
		int pos = 0, neg = 0, cpos = 0, cneg = 0;
		PosNeg(a, n, pos, neg, cpos, cneg);
		cout << "Sum Positive numbers = " << pos << endl;
		cout << "The Positive numbers = " << cpos << endl;
		cout << "Sum Negative numbers = " << neg << endl;
				cout << "The Negative numbers = " << cneg << endl;
				system("pause");
				return 0;
	}

void PosNeg(int a[], int n, int&pos, int&neg, int&cpos, int&cneg)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			pos += a[i]; //����� ������������� ����
			cpos++; //���-�� ������������� ����
		}
		if (a[i] < 0)
		{
			neg += a[i]; //����� ������������ ����
			cneg++; //���-�� ������������� ����
		}
	}
}

void RandomArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
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