#include <iostream>
#include <set>
using namespace std;

int main() {
 set<int> grupy;
 set<int>::iterator it;

 grupy.insert (60);
 grupy.insert (10);
 grupy.insert (60);
 grupy.insert (40);
 grupy.insert (40);
 grupy.insert (20);
 grupy.insert (20);
 
 it = grupy.lower_bound (21);
 cout << *it << endl;
 
 return 0;
} 