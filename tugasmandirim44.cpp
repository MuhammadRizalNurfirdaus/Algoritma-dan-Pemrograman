#include <iostream>
using namespace std;

// Deklarasi variabel untuk menyimpan bilangan pecahan pertama dan kedua, serta operator aritmetika
double bil1, bil2, hasil;
char op;

// Fungsi untuk meminta input dari pengguna
void input_data() {
  cout << "Masukkan bilangan pecahan pertama: ";
  cin >> bil1;
  cout << "Masukkan operator aritmetika (+, -, *, /): ";
  cin >> op;
  cout << "Masukkan bilangan pecahan kedua: ";
  cin >> bil2;
}

// Fungsi untuk melakukan operasi aritmetika sesuai dengan operator yang diinputkan
void operasi_aritmetika() {
  // Menggunakan switch-case berdasarkan nilai op
  switch (op) {
    // Jika op adalah +
    case '+':
      // Menjumlahkan bil1 dan bil2 dan menyimpan hasilnya dalam variabel hasil
      hasil = bil1 + bil2;
      break;
    // Jika op adalah -
    case '-':
      // Mengurangkan bil1 dan bil2 dan menyimpan hasilnya dalam variabel hasil
      hasil = bil1 - bil2;
      break;
    // Jika op adalah *
    case '*':
      // Mengalikan bil1 dan bil2 dan menyimpan hasilnya dalam variabel hasil
      hasil = bil1 * bil2;
      break;
    // Jika op adalah /
    case '/':
      // Membagi bil1 dan bil2 dan menyimpan hasilnya dalam variabel hasil
      hasil = bil1 / bil2;
      break;
    // Jika op tidak sesuai dengan kasus di atas
    default:
      // Menampilkan pesan kesalahan dan mengakhiri program
      cout << "Operator yang Anda masukkan tidak valid\n";
      exit(0);
      break;
  }
}

// Fungsi untuk menguji apakah bilangan pecahan pertama lebih kecil, sama, atau lebih besar dari pada bilangan pecahan kedua
void uji_bilangan() {
  // Jika hasil lebih kecil dari bil2, maka tampilkan pesan "Bilangan pecahan pertama lebih kecil dari bilangan pecahan kedua"
  if (hasil < bil2) {
    cout << "Bilangan pecahan pertama lebih kecil dari bilangan pecahan kedua\n";
  }
  // Jika hasil sama dengan bil2, maka tampilkan pesan "Bilangan pecahan pertama sama dengan bilangan pecahan kedua"
  else if (hasil == bil2) {
    cout << "Bilangan pecahan pertama sama dengan bilangan pecahan kedua\n";
  }
  // Jika hasil lebih besar dari bil2, maka tampilkan pesan "Bilangan pecahan pertama lebih besar dari bilangan pecahan kedua"
  else {
    cout << "Bilangan pecahan pertama lebih besar dari bilangan pecahan kedua\n";
  }
}

// Fungsi utama
int main() {
  // Memanggil fungsi input data
  input_data();
  // Memanggil fungsi operasi aritmetika
  operasi_aritmetika();
  // Memanggil fungsi uji bilangan
  uji_bilangan();
  return 0;
}