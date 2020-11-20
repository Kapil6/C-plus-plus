
#include<iostream> 
using namespace std; 
  
class base { 
    int arr[10]; 
}; 
  
class b1: virtual public base { }; 
  
class b2: virtual public base { }; 
  
class derived: public b1, public b2 {}; 
  
int main(void) 
{ 
  cout << sizeof(derived); 
  return 0; 
} 

