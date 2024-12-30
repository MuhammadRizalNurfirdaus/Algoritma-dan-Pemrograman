#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Masukkan jumlah baris: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << "$ ";
        }
        cout << endl;
    }

    return 0;
}