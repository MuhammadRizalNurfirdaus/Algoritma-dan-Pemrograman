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

void inputMahasiswa(string &nim, string &nama, string &kelas, double &tugas, double &uts, double &uas) {
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
}

int main() {
    string nim1, nama1, kelas1, nim2, nama2, kelas2;
    double tugas1, uts1, uas1, tugas2, uts2, uas2;

    cout << "Input Data Mahasiswa 1\n";
    inputMahasiswa(nim1, nama1, kelas1, tugas1, uts1, uas1);

    cout << "\nInput Data Mahasiswa 2\n";
    inputMahasiswa(nim2, nama2, kelas2, tugas2, uts2, uas2);

    double rataRata1 = (tugas1 + uts1 + uas1) / 3.0;
    double rataRata2 = (tugas2 + uts2 + uas2) / 3.0;

    char grade1 = hitungGrade(rataRata1);
    char grade2 = hitungGrade(rataRata2);

    cout << "\n============================\n";
    cout << "       Data Mahasiswa       \n";
    cout << "============================\n";
    cout << setw(15) << left << "NIM" << setw(30) << "Nama" << setw(20) << "Kelas" << setw(10) << right << "Tugas" << setw(10) << "UTS" << setw(10) << "UAS" << setw(15) << "Grade" << endl;
    cout << "-----------------------------\n";
    cout << setw(15) << left << nim1 << setw(30) << nama1 << setw(20) << kelas1 << setw(10) << right << tugas1 << setw(10) << uts1 << setw(10) << uas1 << setw(15) << grade1 << endl;
    cout << setw(15) << left << nim2 << setw(30) << nama2 << setw(20) << kelas2 << setw(10) << right << tugas2 << setw(10) << uts2 << setw(10) << uas2 << setw(15) << grade2 << endl;
    cout << "============================\n";

    return 0;
}