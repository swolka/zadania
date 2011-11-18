#include <iostream>

using namespace std;

int main()
{   int a, b, c;



    cout << "Wpisz kolejno 3 dowolne liczby calkowite" << endl;
    cout << "do obliczenia sredniej arytmetycznej z nich." << endl;
    cout << " "<<    endl;
    cout << "Wpisz pierwsza liczbe:" << endl;
    cout << "a= ";
    cin  >> a;
    cout << " "<<    endl;
    cout << "Wpisz druga liczbe:"<< endl;
    cout << "b= ";
    cin  >> b;
    cout << " "<<    endl;
    cout << "Wpisz trzecia liczbe:"<<endl;
    cout << "c= ";
    cin  >> c;
    cout << " "<<    endl;
    cout << "Udalo Ci sie!! Srednia arytmetyczna z podanych trzech liczb wynosi="<< (a+b+c)/3 << endl;

    //cout << "Hello world!" << endl;
    return 0;
}
