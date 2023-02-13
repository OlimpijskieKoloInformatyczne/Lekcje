#include <iostream>
#include <set>
using namespace std;

int main() {
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);

 int ile_linii, i;
 long long umiesc_w_zbiorze, poczatek_wypisywania;
 set<long long> liczby;
 set<long long>::iterator it;
 
 cin >> ile_linii;
 for (i=1; i<=ile_linii; ++i) {
    cin >> umiesc_w_zbiorze >> poczatek_wypisywania;
    liczby.insert( umiesc_w_zbiorze );
    
	it = liczby.lower_bound(poczatek_wypisywania);
    for (   ; it != liczby.end(); ++it)
       cout << *it << " ";    
    cout << endl;
 }

 return 0;
}