#include <iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base Constructor" << endl;
	}
	
	virtual ~Base()
	{
		cout << "Base Destructor" << endl;
	}
};

class Derived: public Base
{
public:
	Derived()
	{
		cout << "Derived Constructor" << endl;
	}
	
	~Derived()
	{
		cout << "Derived Destructor" << endl;
	}
};

int main()
{
	Derived *d = new Derived();
	Base *b = d;
	delete b;
	return 0;
}
