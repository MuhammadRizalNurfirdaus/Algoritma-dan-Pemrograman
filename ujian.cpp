#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

string hitungStatus(double akhir) {
    if (akhir >= 60) {
        return "L";
    } else if (akhir >= 50) {
        return "T";
    } else {
        return "TL";
    }
}

int main() {
    const int MAX_MAHASISWA = 5;
    string nama[MAX_MAHASISWA];
    double uts[MAX_MAHASISWA], uas[MAX_MAHASISWA], akhir[MAX_MAHASISWA];
    string status[MAX_MAHASISWA];
    double rataRata = 0;

    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cin.ignore();
        cout << "\nMasukkan Nama Mahasiswa ke-" << i + 1 << ": ";
        getline(cin, nama[i]);

        cout << "Masukkan Nilai UTS: ";
        cin >> uts[i];

        cout << "Masukkan Nilai UAS: ";
        cin >> uas[i];

        double tempAkhir = 0.4 * uts[i] + 0.4 * uas[i];

        akhir[i] = tempAkhir;

        status[i] = hitungStatus(tempAkhir);

        rataRata += tempAkhir;
    }

    rataRata /= jumlahMahasiswa;

    cout << "========================================================================\n";
    cout << "       Data Mahasiswa       \n";
    cout << "========================================================================\n";
    cout << setw(20) << left << "Nama" << setw(10) << right << "UTS" << setw(10) << "UAS" << setw(10) << "AKHIR" << setw(15) << "Status" << endl;
    cout << "------------------------------------------------------------------------\n";

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << setw(20) << left << nama[i] << setw(10) << right << uts[i] << setw(10) << uas[i] << setw(10) << akhir[i] << setw(15) << status[i] << endl;
    }

    cout << "========================================================================\n";
    cout << "Rata-rata Akhir Mahasiswa: " << rataRata << endl;

    return 0;
}