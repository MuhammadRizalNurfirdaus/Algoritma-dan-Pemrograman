#include<iostream>
using namespace std;

void urutan(int n) {
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << n << endl;
}

int main() {
    int n;
    cout << "Masukkan angka awal: ";
    cin >> n;
    urutan(n);
    return 0;
}