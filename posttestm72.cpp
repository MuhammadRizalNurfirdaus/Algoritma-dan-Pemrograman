#include<iostream>
#include<string>
using namespace std;

int main() {
    int i, n = 5, posisi = -1;
    string cari;
    string array[] = {"desa sidaraja", "desa kapandayan", "desa ciomas", "desa ciputat", "desa oleced"};

    cout << "Masukkan daerah yang dicari: ";
    getline(cin, cari);

    for(i = 0; i < n; i++) {
        if(array[i] == cari) {
            posisi = i;
            break;
        }
    }

    if(posisi != -1) {
        cout << "Daerah ditemukan pada posisi ke " << posisi+1 << endl;
    } else {
        cout << "Daerah tidak ditemukan" << endl;
    }

    return 0;
}