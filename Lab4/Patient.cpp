#include <iostream>
#include "Patient.h"

using namespace std;

Patient::Patient()
{

}

Patient::~Patient()
{

}

void Patient::SetFirstName(char* s)
{
	strcpy(firstName, s);
}

void Patient::SetLastName(char* s)
{
	strcpy(lastName, s);
}

void Patient::SetCountry(char* s)
{
	strcpy(country, s);
}

void Patient::SetCity(char* s)
{
	strcpy(city, s);
}

void Patient::SetStreet(char* s)
{
	strcpy(street, s);
}

void Patient::SetHouseNumber(int houseNumber)
{
	this->houseNumber = houseNumber;
}

void Patient::SetApartamentNumber(int apartamentNumber)
{
	this->apartamentNumber = apartamentNumber;
}

void Patient::SetNationality(char* s)
{
	strcpy(nationality, s);
}

void Patient::SetHospitalNumber(int hospitalNumber)
{
	this->hospitalNumber = hospitalNumber;
}

void Patient::SetDepartment(char* s)
{
	strcpy(department, s);
}

void Patient::SetMedicalCardNumber(int medicalCardNumber)
{
	this->medicalCardNumber = medicalCardNumber;
}

void Patient::SetDiagnosis(char* s)
{
	strcpy(diagnosis, s);
}


void  Patient::SetPatient(char*s1, char*s2, char*s3, char*s4, char*s5, int n1, int n2, char*s6, int n3, char*s7, int n4, char*s8)
{
	SetFirstName(s1);
	SetLastName(s2);
	SetCountry(s3);
	SetCity(s4);
	SetStreet(s5);
	SetHouseNumber(n1);
	SetApartamentNumber(n2);
	SetNationality(s6);
	SetHospitalNumber(n3);
	SetDepartment(s7);
	SetMedicalCardNumber(n4);
	SetDiagnosis(s8);
}


char* Patient::GetFirstName()
{
	return firstName;
}

char* Patient::GetLastName()
{
	return lastName;
}

char* Patient::GetCountry()
{
	return country;
}

char* Patient::GetCity()
{
	return city;
}

char* Patient::GetStreet()
{
	return street;
}

int Patient::GetHouseNumber()
{
	return houseNumber;
}

int Patient::GetApartamentNumber()
{
	return apartamentNumber;
}

char* Patient::GetNationality()
{
	return nationality;
}

int Patient::GetHospitalNumber()
{
	return hospitalNumber;
}

char* Patient::GetDepartment()
{
	return department;
}

int Patient::GetMedicalCardNumber()
{
	return medicalCardNumber;
}

char* Patient::GetDiagnosis()
{
	return diagnosis;
}

void  Patient::DisplayPatient()
{
	cout << endl << firstName << " " << lastName << ",\t";
	cout.precision();
	cout << country << " ,\t" << city<<" ,\t" << street<< " ,\t" <<"d. "<< houseNumber<< ",\t" <<"kv. "<<apartamentNumber<< ",\t" << nationality << " ,\t" << hospitalNumber << " ,\t" << department << " ,\t" << medicalCardNumber << "  ,\t" << diagnosis << ".";

}
