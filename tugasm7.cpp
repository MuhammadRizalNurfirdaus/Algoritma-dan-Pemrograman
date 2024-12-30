#include <iostream>
#include <string>
using namespace std;

int main() {
    string kunci1 = "Revo berwarna hitam";
    string kunci2 = "Vario berwarna putih";
    string kunci3 = "Vario berwarna hitam";
    string gantungan1 = "ungu";
    string gantungan2 = "biru";
    string gantungan3 = "hitam";
    string input_gantungan;
    string hasil_pencarian;

    cout << "Masukkan kunci dengan warna gantungan tali: ";
    cin >> input_gantungan;

    if (input_gantungan == gantungan1) {
        hasil_pencarian = kunci1;
    } else if (input_gantungan == gantungan2) {
        hasil_pencarian = kunci2;
    } else if (input_gantungan == gantungan3) {
        hasil_pencarian = kunci3;
    } else {
        hasil_pencarian = "Tidak ditemukan kunci dengan warna gantungan tali tersebut.";
    }

    cout << "Hasil pencarian: " << hasil_pencarian << endl;

    return 0;
}