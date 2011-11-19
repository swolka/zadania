#include <iostream>

using namespace std;

int main()
{
    char znak;
    cout << "Sprawdze, czy wprowadzony pojedynczy znak to mala litera, duza litera, czy cyfra." << endl;
    cout << "Wprowadz dowolny znak:" << endl;
    cin >> znak;

    if (znak>='A' && znak<='Z') cout << "Wprowadzony znak jest duza litera." << endl;
    else if (znak>='a' && znak<='z') cout << "Wprowadzony znak jest mala litera." << endl;
    else if (znak>=48 && znak <=57) cout << "Wprowadzony znak to cyfra." << endl;
    else cout << "To nie cyfra ani nie litera."<< endl;


    return 0;
}
