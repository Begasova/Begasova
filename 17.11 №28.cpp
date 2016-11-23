#include <iostream>

using namespace std;

void BubbleSort(int[], int);
void ChoiceSort(int[], int);
void InsertionSort(int[], int);
void RandomArray(int[], int);
void DisplayArray(int[], int);
void Swap(int&, int&);

int main()
{
	const int N = 100;
	int arr[N] = { 0 };
	int n = 20;
	/*while (true)
	{

	}*/
	RandomArray(arr, n);
	DisplayArray(arr, n);
	InsertionSort(arr, n);
	//BubbleSort(arr, n);
    //ChoiceSort(arr, n);
	cout << endl;
	DisplayArray(arr, n);
	system("pause");
	return 0;
}
//O(n*n)<=>const*n*n <=100
//метод прямого обмена
void BubbleSort(int a[], int n)
{
	//int i = 1;
	//bool flag = true;
	for (int i = 1; i <= n; i++)
		//while(flag)
	{
		//flag = false;
		for (int j = n - 1; j >= i; j--)
		{
			if (a[j] > a[j - 1])
			{
				Swap(a[j], a[j - 1]);
				//flag = true;
			}
		}
		//i++;
	}
}
//метод прямого выбора
void ChoiceSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int max = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] > a[max]) max = j;

		}
		Swap(a[i], a[max]);
	}
}

//метод прямого включения
void InsertionSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				for (int k = i - 1; k >= j; k--)
				{
					a[k + 1] = a[k];
				}
				a[j] = temp;
			}
		}
	}
}

void RandomArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		//a[i] = i + 1;
		a[i] = rand() % 100 - 49;// n - i;
	}
	//a[n - 1] = -1;
}

void DisplayArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}




