/*This program shows the difference between shallow copy and deep copy.

Shallow copy is made when there is no user defined copy constructor and 
there is run time memory is allocated.

Deep copy is made when there is user defined copy constructor and there 
is run time memory allocation, in this each object gets its own memory
*/

#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
	char *s;
	int size;	

public:
	String(const char *str);
	
	~String()
	{
		delete [] s;
	}

	String(const String &s1);
	
	void print()
	{
		cout << s << endl;
	}
	
	void change(const char *str);
};

String::String(const char *str)
{
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

#if 1
String::String(const String &s1)
{
	size = s1.size;
	s = new char[size+1];
	strcpy(s, s1.s);
}
#endif

void String::change(const char *str)
{
	delete [] s;
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

int main()
{
	String s1("Hello world");
	String s2 = s1;
	s1.print();
	s2.print();
	s1.change("Wow");
	s1.print();
	s2.print();
	return 0;
}
