#include <iostream>
using namespace std;

int main() {
    string coba;

    // rumus fibonacci f_n = f_n1 + f_n2
    int n;
    int f_n;
    int f_n1;
    int f_n2;

    // meminta input
    cout << "Halooo, selamat datang!" << endl;
    cout << "Program deret Fibonacci" << endl;

    do {
        cout << "Silahkan masukan nilai ke-n: ";
        cin >> n;

        // Inisialisasi nilai awal Fibonacci
        f_n1 = 1;
        f_n2 = 0;

        // Cetak deret Fibonacci
        cout << "Deret Fibonacci: ";
        for (int i = 1; i <= n; i++) {
            cout << f_n2 << " ";  // Cetak nilai Fibonacci
            f_n = f_n1 + f_n2;  // Hitung nilai Fibonacci selanjutnya
            f_n2 = f_n1;  // Update nilai f_n2
            f_n1 = f_n;  // Update nilai f_n1
        }

        cout << endl;
        cout << "Sudah selesai nih!" << endl;
        cout << "Apakah ingin coba lagi? Silahkan jawab (y/n): ";
        cin >> coba;

    } while (coba == "y");  // Perbaikan perbandingan string

    return 0;
}