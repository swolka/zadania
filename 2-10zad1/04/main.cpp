#include <iostream>

using namespace std;

int main()
{   int a;

    cout << "Sprawdze, czy podana wartosc wprowadzonej liczby calkowitej jest dodatnia, czy ujemna." << endl;
    cout << "Wprowadz dowolna liczbe" << endl;
    cin >> a;
    if (a>0) cout << "Wprowadzona liczba ma wartosc dodatnia" << endl;
    if (a<0) cout << "Wprowadzona liczba ma wartosc ujemna" << endl;
    else     cout << "Wprowadzona liczba jest rowna zero" << endl;



    return 0;
}
