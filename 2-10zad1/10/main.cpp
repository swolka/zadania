#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double x, z;
    cout << "Oblicze wartosc wyrazenia [(pierwiastek z x)+x]/(2+x)." << endl<< endl;
    cout << "Wpisz dowolna liczbe ulamkowa ( w postaci np 0.5) :" << endl;
    cin >> x;


    if (x<0) cout <<endl<< "x nie moze byc ujemne"<<endl<<"pod pierwiastkiem liczba powinna przyjmowac wartosc dodatnia." << endl;

    else cout << "Wynik to: "<< (sqrt(x) + x)/(2 + x)<< endl;




    return 0;
}
