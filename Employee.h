#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
	string name;
	string position;
	int age;
	
	Employee (string n, string p, int a) : name(n), position(p), age(a) {};
	
	friend ostream& operator << (ostream& stream, const Employee& e) 
	{
		stream << e.name<< "("<<e.age<<"), "<< e.position;
		return stream;
	}
};
#endif
