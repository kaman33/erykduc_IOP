#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x <= 0) {
        cout << "Blad: liczba musi byc dodatnia.\n";
        return 0;
    }

    cout << x << endl;
}

