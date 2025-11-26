#include <iostream>
using namespace std;

bool czy_doskonala(int n){

	int suma = 0;

	for ( int i = 1; i < n; i++ ){
		if ( n % i == 0 ) suma += i;
	}
	return suma == n;
}

int main(){

	int n;
	cin >> n;
	
	if (n <= 0) {
        cout << "Blad: liczba musi byc dodatnia.\n";
        return 0;
	}

	if(czy_doskonala(n)){
		cout << "jest doskonala\n";
	}
	else{
		cout << "nie jest doskonala\n";

    }

}