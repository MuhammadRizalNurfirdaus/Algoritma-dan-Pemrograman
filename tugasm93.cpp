#include <iostream>
using namespace std;

const int MAX_DIGITS = 40;

// Fungsi untuk melakukan penjumlahan dua bilangan
int jumlah(int a, int b) {
    return a * b;
}


int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    cout << "Hasil penjumlahan: " << jumlah(a, b) << endl;
    return 0;
}