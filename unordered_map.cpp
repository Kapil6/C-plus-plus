#include <iostream> 
#include <unordered_map>
 
using namespace std; 
  
int main() 
{ 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value will 
    // be of double type 
    unordered_map<char, int> umap; 
  
    // inserting values by using [] operator 
    umap['a'] = 1; 
    umap['b'] = 1; 
    umap['c'] = 1; 
	
	if(umap.count('a') == 1){ 
		cout <<"Present in Unordered map" << endl; 
	}
 
 	return 0; 
} 
