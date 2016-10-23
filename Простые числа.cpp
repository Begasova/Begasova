#include <iostream>

using namespace std;

bool IsSimpleNumber(int n);

int main()
{
	int n;
	cout << "Enter the number" << endl << "n = ";
	cin >> n;
	if (IsSimpleNumber(n))
		cout << "Prime number" << endl;
	else
		cout << "Not prime number"<< endl;
	system("pause");
	return 0;
}
bool IsSimpleNumber(int n)
{
	for (int i = 2; i <= 1 / 2; i++)
	{
		if (!(n % 1)); // n % i == 0
		return false;
	}
	return true;
}