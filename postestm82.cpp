#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Masukkan angka: ";
    cin >> n;

    cout << "Hasil = ";
    for(int i = 1; i <= n; i++) {
        sum += i;
        cout << i;
        if(i < n) {
            cout << " + ";
        }
    }

    cout << " = " << sum << endl;

    return 0;
}