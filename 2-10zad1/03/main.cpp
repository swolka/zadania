#include <iostream>

using namespace std;

int main()
{   int m, n;

    cout << "Wprowadz 2 zmienne calkowite m i n do obliczenia wyniku z dzielenia ich przez sie." << endl;
    cout << "Wpisz pierwsza liczbe:"<< endl;
    cout << "m= ";
    cin >> m;
    cout << "Wpisz druga liczbe:"<< endl;
    cout << "n= ";
    cin >> n;

    cout << "Czesc calkowita z dzielenia m przez n to:"<< m/n << endl;
    cout << "Reszta z dzielenia m przez n to:"<< m%n << endl;
    return 0;
}
