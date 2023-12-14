#include <iostream>
using namespace std;

struct mhs {
    char nama[20], nim[10], matkul[15];
    int sks;
};

int main() {
    const int jumlah_mhs = 2;
    mhs bayar[jumlah_mhs];

    for (int i = 0; i < jumlah_mhs; i++) {
        cout << "\n\n--------------------------\n";
        cout << "\nNama mhs    = ";
        cin.ignore(); // Membersihkan newline character
        cin.getline(bayar[i].nama, 20);

        cout << "NIM         = ";
        cin >> bayar[i].nim;
    }

    // Tambahkan logika atau operasi yang diperlukan setelah mengambil input

    return 0;
}

