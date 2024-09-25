#include <iostream>
using namespace std;

int main() {
    int n;
    string coba;

    cout << "Haloo, ini program piramida" << endl;

    do {
        // Meminta input
        cout << "Silahkan memasukan tinggi piramida: ";
        cin >> n;

        // Deklarasi variabel
        int i, j;

        // Cetak baris
        for (int i = 1; i <= n; ++i) {
            // Cetak spasi
            for (int j = i; j <= n; ++j) {
                cout << " ";
            }

            // Cetak bintang
            for (int j = 1; j <= 2 * i - 1; ++j) {
                cout << "*";
            }

            cout << endl;  // Ganti baris
        }

        // Menanyakan apakah ingin mencoba lagi
        cout << "Ingin coba lagi? (y/n): ";
        cin >> coba;

    } while (coba == "y");  // Kondisi perulangan, berhenti jika pengguna memasukkan selain "y"

    return 0;
}