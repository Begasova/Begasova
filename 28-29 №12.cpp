#include <iostream>

using namespace std;

int main()
//������� �)
/*{
	double sum = 0;
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		sum = sum + 1. / i; //���������� � ���� 1. (� ������) ��� sum = sum(double)1/i
	cout << sum << endl;
	system("pause");
	return 0;
}*/
//������� �)*/
/*{
	double s = 1;
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
		s = s * 2;
	cout << s << endl;
	system("pause");
	return 0;
}*/
//������� �)
/*{
	double s = 1;
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 1; i < n; i++)
		s = s * 1 + 1. / i / i;
	cout << s << endl;
	system("pause");
	return 0;
}*/
//������� �)
/*{
	double s = 0;
	int p = 1;
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		s = s + (double)p / i / (i + 1);
		p = -p;
	}
	cout << s << endl;
	system("pause");
	return 0;
}*/
// ������� �)
/*{
	double sum = 1;
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 1; i < n; i++)
		sum = sum + 1. / pow(n, 5);
	cout << sum << endl;
	system("pause");
	return 0;
}*/
//������� �)
/*{
	double sum = 0, denom = 0;
	long long numer = 1;
	int p = 1;
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		numer = numer*i;
		denom = denom + 1. / i;
		sum = sum + numer / denom;
		cout << sum << endl;
	}
	system("pause");
	return 0;
}*/
// ������� �)
/*{
	double s = 0;
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s = sqrt(s + 2);
	}
	cout << s << endl;
	system("pause");
	return 0;
}*/
