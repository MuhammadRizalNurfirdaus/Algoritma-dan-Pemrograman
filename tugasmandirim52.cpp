#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Masukkan jumlah baris: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows; ++j) {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}