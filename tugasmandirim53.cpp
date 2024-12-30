#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0, num;

    cout << "Masukkan jumlah nilai: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> num;
        sum += num;
    }

    cout << "Rata-rata dari nilai yang dimasukkan adalah " << sum / n << endl;

    return 0;
}