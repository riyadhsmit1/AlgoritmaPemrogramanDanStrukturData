#include <iostream>
using namespace std;

int main() {
    int i, angka;
    bool bilanganprima = true;

	cout << "masukkan sebuah angka: ";
    cin >> angka;

    if (angka <= 1) {
        bilanganprima = false;
    } else {
        for (int i=2; i*i <=angka; i++) {
            if (angka %i==0) {
                bilanganprima=false;
                break;
            }
        }
    }

    if (bilanganprima) {
        cout << angka << " adalah bilangan prima" << endl;
    } else {
        cout << angka << " bukan bilangan prima" << endl;
    }

    return 0;
}
