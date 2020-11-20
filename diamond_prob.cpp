/*This example shows how the diamond problem occurs*/

#include <iostream>

using namespace std;

class Person
{
	public:
	Person()
	{
		cout << "Person class is called" << endl;
	}
	Person(int x)
	{
		cout << "Person (int) class is called" << endl;
	}
	~Person()
	{
		cout << "Person destructor is called" << endl;
	}
};

class Faculty: public Person 
{
	public:
	Faculty()
	{
		cout << "Faculty class is called" << endl;
	}
	Faculty(int x): Person(x)
	{
		cout << "Faculty (int) class is called" << endl;
	}
	~Faculty()
	{
		cout << "Faculty destructor is called" << endl;
	}
};

class Student: public Person 
{
	public:
	Student()
	{
		cout << "Student class is called" << endl;
	}
	Student(int x): Person(x)
	{
		cout << "Student (int) class is called" << endl;
	}
	~Student()
	{
		cout << "Student destructor is called" << endl;
	}
};

class TA: public Faculty, public Student 
{
	public:
	TA()
	{
		cout << "TA class is called" << endl;
	}
	TA(int x): Faculty(x), Student(x)
	{
		cout << "TA (int) class is called" << endl;
	}
	~TA()
	{
		cout << "TA destructor is called" << endl;
	}
};


int main()
{
	TA ta1(5);
	return 0;	
}
