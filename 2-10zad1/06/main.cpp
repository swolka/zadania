#include <iostream>

using namespace std;

int main()
{   int a;
    cout << "Sprawdze, czy podana liczba jest dwucyfrowa czy inna." << endl;
    cout << "Wprowadz dowolna liczbe:"<< endl;
    cin >> a;

    if ( (a>=(-99) && a<=(-10) ) || (a>=10 && a<=99) ) cout << "Wprowadzona liczba jest dwucyfrowa." << endl;
     else cout << "Wprowadzona liczba jest inna (nie jest dwucyfrowa)." << endl;

}
