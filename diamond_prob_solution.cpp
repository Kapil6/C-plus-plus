/*This example shows how the diamond problem solution occurs using virtual keyword*/
/*Virtual can be used only with methods and it can't be used with class and constructor*/
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

class Faculty: virtual public Person 
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

class Student: virtual public Person 
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
	TA(int x): Faculty(x), Student(x), Person(x)
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
