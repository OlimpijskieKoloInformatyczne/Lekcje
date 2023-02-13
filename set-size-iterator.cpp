#include <iostream>
#include <set>
using namespace std;

int main() {
 set<int> grupy;
 grupy.insert(20);
 grupy.insert(20);
 grupy.insert(10);
 grupy.insert(15);
 grupy.insert(10);
 grupy.insert(20);
 grupy.insert(15);

 cout << grupy.size() << endl;



 
 return 0;
}
