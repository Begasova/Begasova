#include <iostream>
#include "Patient.h"

using namespace std;

Patient InitPatient();
Patient* InitArray(int);
void DisplayArray(Patient*, int);
void EnterArray(int*, int);
void SortFirstName(Patient*, int);
void Swap(Patient&, Patient&);

int main()
{
	int n;
	cout << "Enter the number of Patients:";
	cin >> n;
	system("cls");
	Patient* patients = InitArray(n);
	if (!patients)
	{
		cout << "Enter erray!" << endl;
		system("pause");
		return 0;
	}
	cout << "The list of Workers: " << endl << endl;
	DisplayArray(patients, n);



	cout << "The sorting list of Workers:" << endl;;
	SortFirstName(patients, n);
	DisplayArray(patients, n);
	delete[] patients;
	system("pause");
	return 0;
}

Patient InitPatient()
{
	char firstName[N] = "", lastName[N] = "", country[N] = "", city[N] = "", street[N] = "", nationality[N] = "", department[N] = "", diagnosis[N] = "";
	int  houseNumber, apartamentNumber, hospitalNumber, medicalCardNumber;;
	cout << "Enter first name: " << endl;
	cin.ignore();
	cin.get(firstName, N, '\n');
	cout << "Enter last name: " << endl;
	cin.ignore();
	cin.get(lastName, N, '\n');
	cout << "Address" << endl << "Enter country: " << endl;
	cin.ignore();
	cin.get(country, N, '\n');
	cout << "Enter city: " << endl;
	cin.ignore();
	cin.get(city, N, '\n');
	cout << "Enter street: " << endl;
	cin.ignore();
	cin.get(street, N, '\n');
	cout << "Enter house number: " << endl;
	cin >> houseNumber;
	cout << "Enter apartament number: " << endl;
	cin >> apartamentNumber;
	cout << "Enter nationality: " << endl;
	cin.ignore();
	cin.get(nationality, N, '\n');
	cout << "Enter hospital number: " << endl;
	cin >> hospitalNumber;
	cout << "Enter department: " << endl;
	cin.ignore();
	cin.get(department, N, '\n');
	cout << "Enter medical card number: " << endl;
	cin >> medicalCardNumber;
	cout << "Enter diagnosis: " << endl;
	cin.ignore();
	cin.get(diagnosis, N, '\n');
	
	Patient patient;
	patient.SetPatient(firstName, lastName, country, city, street, houseNumber, apartamentNumber, nationality, hospitalNumber, department, medicalCardNumber, diagnosis);
	return patient;
}

Patient* InitArray(int n)
{
	Patient* array = new Patient[n];
	if (!array)
		return NULL;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the information about " << (i + 1) << "  Patient\n" << endl;
		array[i] = InitPatient();
	}
	return array;
}

void EnterArray(int* array, int n)
{
	for (int i = 0; i < M; i++)
	{
		cout << "enter A[" << (i + 1) << "] = ";
		cin >> array[i];
	}
}

void DisplayArray(Patient* array, int n)
{
	for (int i = 0; i < n; i++)
		array[i].DisplayPatient();
	cout << endl;
}

void SortFirstName(Patient* array, int n)
{
	for (int i = 0; i <= n; i++)
		for (int j = n - 1; j > i; j--)
			if (strcmp(array[j].GetFirstName(), array[j - 1].GetFirstName()) < 0)
				Swap(array[j], array[j - 1]);
}

void Swap(Patient &a, Patient &b)
{
	Patient t = a;
	a = b;
	b = t;
}