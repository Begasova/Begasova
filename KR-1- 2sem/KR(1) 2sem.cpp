#include <iostream>
#include <fstream>

using namespace std;

const int N = 256;

void ShowContentsFile(char*);
int* InitArray(char*, int);
int* MergeArrays(int*, int, int*, int, int&);
void DisplayArray(int*, int);
void CreateFile(char*, int*, int);

int main()
{
	char fileNameFirst[N], fileNameSecond[N];
	cout << "Please, enter the name of source files: " << endl;
	cout << "1st file: ";
	cin.getline(fileNameFirst, N, '\n');
	cout << "2nd file: ";
	cin.getline(fileNameSecond, N, '\n');
	char fileNameNew[N];
	cout << "Please, enter the name of result file: " << endl;
	cin.getline(fileNameNew, N, '\n');

	cout << endl;

	cout << "Sourse files: " << endl;
	ShowContentsFile(fileNameFirst);
	ShowContentsFile(fileNameSecond);

	ifstream streamIn1(fileNameFirst);
	if (!streamIn1.is_open())
	{
		cout << "Cannot open file to read!" << endl;
	}

	ifstream streamIn2(fileNameSecond);
	if (!streamIn2.is_open())
	{
		cout << "Cannot open file to read!" << endl;
	}

	ofstream out(fileNameNew);
	if (!out.is_open())
	{
		cout << "Cannot open file to read!" << endl;
	}

	int count = 0, term1, term2;
	while (true)
	{
		streamIn1 >> term1;
		streamIn2 >> term2;
		while (!streamIn2.eof() && !streamIn1.eof())
		{
			if (term2 >= term1)
			{
				out << term1 << " ";
				streamIn1 >> term1;
			}
			else
			{
				out << term2 << " ";
				streamIn2 >> term2;
			}
		}
		if (streamIn1.eof())
		{
			while (!streamIn2.eof())
			{
				out << term2 << " ";
				streamIn2 >> term2;
			}
			break;
		}
		if (streamIn2.eof())
		{
			while (!streamIn1.eof())
			{
				out << term1 << " ";
				streamIn1 >> term1;
			}
			break;
		}
	}
	cout << "New array: " << endl;
	ShowContentsFile(fileNameNew);
		system("pause");
	return 0;
}

void ShowContentsFile(char* fileName)
{
	ifstream streamIn;
	streamIn.open(fileName);
	if (!streamIn.is_open())
	{
		cout << " Cannot open file " << fileName << " to read!" << endl;
		system("pause");
		exit(1);
	}
	char string[N] = "";
	while (!streamIn.eof())
	{
		streamIn.getline(string, N, '\n');
		cout << string << endl;
	}
}

int* InitArray(char* fileName, int n)
{
	ifstream streamIn(fileName);
	if (!streamIn.is_open())
	{
		cout << "Cannot open file to read!" << endl;
		system("pause");
		exit(1);
	}
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		streamIn >> arr[i];
	streamIn.close();
	return arr;
}

int* MergeArrays(int* a, int n, int* b, int m, int& l)
{
	l = n + m;
	int* c = new int[l];
	int i = 0, j = 0, k = 0;
	for (; i < n && j < m; k++)
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
	}
	if (i == n)
		for (; j < m; j++, k++)
			c[k] = b[j];
	else
		for (; i < n; i++, k++)
			c[k] = a[i];
	return c;
}

void DisplayArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
}

void CreateFile(char* fileName, int* arr, int n)
{
	ofstream streamOut(fileName);
	if (!streamOut.is_open())
	{
		cout << "Cannot open file to write!" << endl;
		system("pause");
		exit(1);
	}
	int temp;
	for (int i = 0; i < n; i++)
	{
		temp = arr[i];
		streamOut << temp << " ";
	}
	streamOut.close();
}

