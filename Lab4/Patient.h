#pragma once

const int N = 20;
const int M = 5;

class Patient
{
public:
	Patient();
	~Patient();

	void SetFirstName(char*);
	void SetLastName(char*);
	void SetCountry(char*);
	void SetCity(char*);
	void SetStreet(char*);
	void SetHouseNumber(int);
	void SetApartamentNumber(int);
	void SetNationality(char*);
	void SetHospitalNumber(int);
	void SetDepartment(char*);
	void SetMedicalCardNumber(int);
	void SetDiagnosis(char*);

	void SetPatient(char*, char*, char*, char*, char*, int, int, char*, int, char*, int, char*);

	void DisplayPatient();

	char* GetFirstName();
	char* GetLastName();
	char* GetCountry();
	char* GetCity();
	char* GetStreet();
	int GetHouseNumber();
	int GetApartamentNumber();
	char* GetNationality();
	int GetHospitalNumber();
	char* GetDepartment();
	int GetMedicalCardNumber();
	char* GetDiagnosis();


private:
	char firstName[N], lastName[N], country[N], city[N], street[N], nationality[N], department[N], diagnosis[N];
	int houseNumber, apartamentNumber, hospitalNumber, medicalCardNumber;

};
