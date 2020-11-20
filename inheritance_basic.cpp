#include <iostream>

using namespace std;

class A
{
	public:
		A()
		{
			cout << "A's constructor is called" << endl;
		}
		A(int x)
		{
			cout << "A's (int) constructor is called" << endl;
		}
		~A()
		{
			cout << "A's destructor is called" << endl;
		}
};

class B
{
	public:
		B()
		{
			cout << "B's constructor is called" << endl;
		}
		B(int x)
		{
			cout << "B's (int) constructor is called" << endl;
		}
		~B()
		{
			cout << "B's destructor is called" << endl;
		}
};

class C: public A, public B
{
	public:
		C()
		{
			cout << "C's constructor is called" << endl;
		}
		C(int x):A(x), B(x)
		{
			cout << "C's (int) constructor is called" << endl;
		}
		~C()
		{
			cout << "C's destructor is called" << endl;
		}

};

int main()
{
	C c(5);
	return 0;
}
