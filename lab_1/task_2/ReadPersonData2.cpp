#include "Header.h"

void ReadPersonData(string& _name, unsigned short& _age, unsigned short& height, unsigned short& _weight)
{
	cout << "second override" << endl;
	cout << "Input name: ";
	_name = ReadPersonName();
	cout << "Input age: ";
	_age = ReadPersonAge();
	cout << "Input height: ";
	ReadPersonHeight();
	cout << "Input weight: ";
	ReadPersonWeight(_weight);
	cout << endl;
}