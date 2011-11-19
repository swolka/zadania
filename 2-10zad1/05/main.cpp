#include <iostream>

using namespace std;

int main()
{
    int a;


    cout << "Sprawdze, czy wprowadzona przez Ciebie liczba"<< endl;
    cout << "jest parzysta czy nieparzysta." << endl << endl;
    cout << "Wprowadz dowolna liczbe:" << endl;
    cin >> a;
    if (a%2==0) cout<< "Wprowadzona liczba jest parzysta." << endl;

    else cout << "Wprowadzona liczba jest nieparzysta." << endl;

    return 0;
}
