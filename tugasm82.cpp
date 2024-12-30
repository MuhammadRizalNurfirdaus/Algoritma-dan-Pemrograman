#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return(fibonacci(n-1) + fibonacci(n-2));
}

int main() {
    int bulan = 3;
    int jumlahKelinci = fibonacci(bulan + 3); 

    cout << "Jumlah kelinci setelah " << bulan << " bulan adalah: " << jumlahKelinci;
    return 0;
}