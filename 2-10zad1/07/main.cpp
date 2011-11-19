#include <iostream>
#include <cstdlib>

using namespace std;
// ?
int main()
{
    char z;
    cout << "Sprawdze, czy wprowadzony pojedynczy znak (litera) jest duzy czy maly." << endl;
    cout << "Wprowadz dowolny znak:" << endl;
    cin >> z;
    if (z>='A' && z<='Z') cout << "Wprowadzony znak jest duza litera." << endl;
    else cout <<"Wprowadzony znak jest inny(nie jest duza litera)." << endl;

    return 0;
}
