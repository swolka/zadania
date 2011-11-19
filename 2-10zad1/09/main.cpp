#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cout << "Oblicze 1/x"<<endl<<"Wpisz dowolna liczbe ulamkowa ( w postaci np 0.5) :" << endl;
    cin >> x;

    if (x!=0.0) cout << "Wynik to: "<< 1/x << endl;

    else cout << "Nie dzieli sie przez zero..." << endl;


    return 0;
}
