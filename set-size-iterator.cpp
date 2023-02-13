#include <iostream>
#include <set>
using namespace std;

int main() {
 set<int> grupy;
 set<int>::iterator it; // wskaznik
 
 grupy.insert(20);
 grupy.insert(20);
 grupy.insert(10);
 grupy.insert(15);
 grupy.insert(10);
 grupy.insert(20);
 grupy.insert(15);

 it = grupy.begin(); //wskaznik na pierwszy element
 cout << *it << endl;
 
 ++it; //wsskaznik na drugi
 cout << *it << endl;

 ++it; //wskaznik na 3
 cout << *it << endl;
 


 
 return 0;
}

