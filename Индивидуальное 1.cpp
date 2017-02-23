#include <iostream> 


using namespace std;

void EnterArray(float* arr, int n);
void DisplayArray(float* arr, int n);
void SpecialSortArr(float* arr, int n, int a);
float RoundUpToK(float number, int k);
void NewArray(float* arr1, float* arr2, int&n, int k);
void DelRepeating(float* arr, int&n);
void DelEl(float* arr, int El, int n);

int main()
{
	int n;
	cout << "Size of array = ";
	cin >> n;
	float* arr1 = new float[n]; 
	float* arr2 = new float[n]; 

	EnterArray(arr1, n);
	int a;
	cout << "a = ";
	cin >> a;
	SpecialSortArr(arr1, n, a);

	cout << "Arr1 after sort = ";
	DisplayArray(arr1, n);

	int k;
	cout << "Rank to rounding = ";
	cin >> k;
	NewArray(arr1, arr2, n, k);

	cout << "Arr2 = ";
	DisplayArray(arr2, n);

	system("pause");

}
float RoundUpToK(float number, int k)
{
	if (!k) 
		return floor(number + 0.5);
	else
	{
		int ten = 10;
		
		for (int i = 1; i < k; i++)
			ten *= 10;
		return round(number * ten) / ten;
	}
}
void SpecialSortArr(float* arr, int n, int a)
{
	int remainder1, remainder2;
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = 0; i < n - 1; i += 2)
		{
			remainder1 = int(arr[i]) % a;
			remainder2 = int(arr[i + 2]) % a;
			if (remainder1 < remainder2)
			{
				swap(arr[i], arr[i + 2]);
				flag = true;
			}
		}
	}
}
void EnterArray(float* arr, int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; i++)
		cin >> *(arr + i);
}


void DisplayArray(float* arr, int n)
{

	for (int i = 0; i < n; i++)
		cout << *(arr + i) << " ";
	cout << endl;
}

void DelEl(float* arr, int El, int n)
{
	for (int i = El; i < n - 1; i++)
		*(arr + i) = *(arr + i + 1);
}

void DelRepeating(float* arr, int&n)
{
	for (int i = 0;  i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] == arr[j])
			{
				DelEl(arr, j, n); j--; n--;
			}
}
void NewArray(float* arr1, float* arr2, int&n, int k)
{
	DelRepeating(arr1, n);
	for (int i = 0; i < n; i++)
		*(arr2 + i) = RoundUpToK(*(arr1 + i), k);
}