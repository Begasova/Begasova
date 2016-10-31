#include <iostream>
#include <math.h>

using namespace std;

long long ToChange(long long , short , short );
void ToChangeNew(long long&, short , short );

int main()
{
	while (true)
	{
		long long number;
		cout << "Enter the number" << endl;
		cin >> number;
		short digit1, digit2;
		cout << "Enter number that you want change" << endl;
		cin >> digit1;
		cout << "Enter number on what you want change" << endl;
		cin >> digit2;
	long long answer = ToChange(number, digit1, digit2);
		cout << number << " -> " << answer << endl;
		long long copy = number;
		ToChangeNew(number, digit1, digit2);
		cout << copy << " -> " << answer << endl;
		short ok;
		cout << "If continue press 1, if exit press 0" << endl;
		cin >> ok;
		system("cls");
		if (ok == 0)
			return 0;
	}
}

long long ToChange(long long number, short digit1, short digit2)
{
	long long power = -1, answer = 0;
	short remainder;
	while (number > 0)
	{
		remainder = number % 10;
		power++;
		if (remainder != digit1)
			answer = answer + remainder*pow(10, power);
		else
			answer = answer + digit2*pow(10, power);
		number = number / 10;
		}
	return answer;
}

void ToChangeNew(long long& number1, short digit1, short digit2)
{
	long long power = -1, answer = 0;
	short remainder;
	while (number1 > 0)
	{
		remainder = number1 % 10;
		power++;
		if (remainder != digit1)
			answer = answer + remainder*pow(10, power);
		else
			answer = answer + digit2*pow(10, power);
		number1 = number1 / 10;
	}
	number1 = answer;
	return;
}