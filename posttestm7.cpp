#include<iostream>
using namespace std;

int main() {
    int i, posisi, ketemu = 0;
    char cari;
    char data[100];
    char array[] = {'1', '2', '3', '4', '5'};

    cout << "Masukkan data: ";
    cin >> data;
    cout << "Karakter yang dicari: ";
    cin >> cari;

    for(i = 0; array[i] != '\0'; i++) {
        if(array[i] == cari) {
            ketemu = 1;
            posisi = i;
            break;
        }
    }

    if(ketemu == 0) {
        cout << "Karakter yang dicari tidak ditemukan" << endl;
    } else {
        cout << "Karakter yang dicari ditemukan" << endl;
        cout << "Karakter berada pada posisi " << posisi + 1 << endl;
    }

    return 0;
}