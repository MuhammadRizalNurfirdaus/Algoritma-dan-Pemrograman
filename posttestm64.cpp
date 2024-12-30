#include <iostream>
using namespace std;

int main() {
  // deklarasi array dan variabel
  int arr[100], n, i, sum;
  float avg;

  // input jumlah elemen array
  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  // input elemen array
  cout << "Masukkan elemen array: \n";
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // hitung jumlah elemen array
  sum = 0;
  for (i = 0; i < n; i++) {
    sum += arr[i];
  }

  // hitung rata-rata elemen array
  avg = (float) sum / n;

  // tampilkan jumlah dan rata-rata elemen array
  cout << "Jumlah: " << sum << endl;
  cout << "Rata-rata: " << avg << endl;

  return 0;
}