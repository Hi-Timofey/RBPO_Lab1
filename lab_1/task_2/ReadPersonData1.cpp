#include "Header.h"

void ReadPersonData(string& _name, unsigned short& _age, double& _salary)
{
	cout << "first override" << endl;
	cout << "Input name: ";
	_name = ReadPersonName();
	cout << "Input age: ";
	_age = ReadPersonAge();
	cout << "Input salary: ";
	ReadPersonSalary(&_salary);
	cout << endl;
}