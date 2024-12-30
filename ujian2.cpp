#include <iostream>
#include <iomanip>

using namespace std;

char hitungGrade(double rataRata) {
    if (rataRata >= 90) {
        return 'A';
    } else if (rataRata >= 80) {
        return 'B';
    } else if (rataRata >= 70) {
        return 'C';
    } else if (rataRata >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    string nama, nim, kelas;
    double tugas, uts, uas;

    cout << "Masukkan NIM Mahasiswa: ";
    cin >> nim;
    cin.ignore();  // To consume the newline character

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);

    cout << "Masukkan Kelas Mahasiswa: ";
    getline(cin, kelas);

    cout << "Masukkan Nilai Tugas: ";
    cin >> tugas;

    cout << "Masukkan Nilai UTS: ";
    cin >> uts;

    cout << "Masukkan Nilai UAS: ";
    cin >> uas;

    double rataRata = (tugas + uts + uas) / 3.0;

    char grade = hitungGrade(rataRata);

    cout << "\n============================\n";
    cout << "       Data Mahasiswa       \n";
    cout << "============================\n";
    cout << setw(15) << left << "NIM" << setw(30) <<  "Nama"  << setw(20)       <<  "Kelas"  << setw(10) << right << "Tugas" << setw(10) << "UTS" << setw(10) << "UAS" << setw(15) << "Grade" << endl;
    cout << "-----------------------------\n";
    cout << setw(15) << left << nim << setw(30)   <<   nama   << setw(20)       <<   kelas   << setw(10) << right << tugas << setw(10) << uts << setw(10) << uas << setw(15) << grade << endl;
    cout << "============================\n";

    return 0;
}