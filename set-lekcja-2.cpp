//set - lekcja 2
//kod przykladow z lekcji
//iterator, wypisywanie elementow, find, erase

#include <iostream>
#include <set>
using namespace std;

int main() {
 set<int> liczby;
 set<int>::iterator it;
 int liczba;

 liczby.insert (5);
 liczby.insert (8);
 liczby.insert (1);
 liczby.insert (5);
 liczby.insert (5);
 liczby.insert (5);
 liczby.insert (10);
 liczby.insert (8);
 liczby.insert (8);
 liczby.insert (8);
 liczby.insert (8);

//Rozmiar setu:
 cout << liczby.size() << endl;


//Wypisujemy liczby ręcznie w set od pierwszej:
 it = liczby.begin();
 cout << *it << endl;
 ++it; ++it;
 cout << *it << endl;


//Wypisujemy wszystkie liczby w set.
 for (it=liczby.begin(); it!=liczby.end(); ++it)
    cout << *it << " ";
 cout << endl;
 
//znajdujemy liczbę
 liczba = 5;
 it = liczby.find (liczba); 
 cout << *it << endl;
//Wypisujemy kolejną
 ++it;
 cout << *it << endl;

//Usuwamy liczbę podając wskaźnik
//Najpierw znajdujemy - upewniamy się że jest
 if ( it != liczby.end() )
    liczby.erase ( it );

 return 0;
}
