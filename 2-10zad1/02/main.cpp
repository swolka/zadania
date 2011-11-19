#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int x, y, z;


    cout << "Wpisz kolejno 3 dowolne liczby calkowite" << endl;
    cout << "do wyznaczenia pierwiastka z wyrazenia 3+(x+2y)(x+2y)+z " << endl;
    cout << " "<<    endl;
    cout << "Wpisz pierwsza liczbe:" << endl;
    cout << "x= ";
    cin  >> x;
    cout << " "<<    endl;
    cout << "Wpisz druga liczbe:"<< endl;
    cout << "y= ";
    cin  >> y;
    cout << " "<<    endl;
    cout << "Wpisz trzecia liczbe:"<<endl;
    cout << "z= ";
    cin  >> z;
    cout << " "<<    endl;

    cout << "Znowu sie udalo! Wynik to= " << sqrt(3+(x+2*y)*(x+2*y)+z) << endl;


    return 0;
}
