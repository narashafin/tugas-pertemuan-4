#include <iostream>
#include <vector>
using namespace std;

bool CekPrima(int n) {  //menampilkan bilangan prima
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void GanjilAtauGenap(int n) { //menampilkan bilangan ganjil dan genap
    if (n % 2 == 0) {
        cout << n << " adalah bilangan genap" << endl;
    } else {
        cout << n << " adalah bilangan ganjil" << endl;
    }
}

vector<int> FaktorBilangan(int n) {  
    vector<int> faktor;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) faktor.push_back(i);
    }
    return faktor;
}

int main() {
    int n;
    string coba;
    cout << "selamat datanggg di klasifikasi bilangan ^^" << endl;
    
    do { //perulangan kondisi
    cout << "Masukkan batas: "; //memasukkan input
    cin >> n;
       
    cout << "Bilangan prima antara 1 hingga " << n << " adalah: ";  //menampilkan bilangan prima
    for (int i = 1; i <= n; i++) {
        if (CekPrima(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        GanjilAtauGenap(i);
    }
    cout << endl;

    int TotalGanjil = 0, TotalGenap = 0, TotalPrima = 0;
    for (int i = 1; i <= n; i++) {
        vector<int> faktor = FaktorBilangan(i);
        if (i % 2 == 0) {
            cout << i << " Faktornya: ";
            TotalGenap++;
        } else {
            cout << i << " Faktornya: ";
            TotalGanjil++;
        }
        for (int f : faktor) {
            cout << f << " ";
        }
        cout << endl;

        if (CekPrima(i)) {  //menampilkan bilangan prima
            cout << i << " Adalah bilangan Prima." << endl;
            TotalPrima++;
        }
    }

    cout << endl;   
    //menampilkan jumlah bilangan
    cout << "Jumlah Bilangan Ganjil: " << TotalGanjil << endl;
    cout << "Jumlah Bilangan Genap: " << TotalGenap << endl;
    cout << "Jumlah Bilangan Prima: " << TotalPrima << endl;
    cout << "sudah selesai nih" << endl;
    cout << "mau coba lagiiiii gakk??? (y/n)" << endl;
    cin >> coba;
    
    } while (coba == "y");  //perulangan kondisi
    
    return 0;
}
