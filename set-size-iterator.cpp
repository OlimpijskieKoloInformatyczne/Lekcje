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

//it od *it

 for (it=grupy.begin(); it!=grupy.end(); ++it)
    cout << *it << " ";
 cout << endl;
 return 0;
}


