#include <iostream>
#include <cmath>

using namespace std;

// Deklarasi variabel untuk menyimpan bilangan dan status prima
int bilangan, prima;

// Fungsi untuk meminta input dari pengguna
void input_bilangan() {
  cout << "Masukkan bilangan yang ingin Anda cek: ";
  cin >> bilangan;
}

// Fungsi untuk mengecek apakah bilangan prima atau bukan
void cek_prima() {
  // Inisialisasi status prima dengan 1 (benar)
  prima = 1;
  // Jika bilangan kurang dari atau sama dengan 1, maka bukan prima
  if (bilangan <= 1) {
    prima = 0;
  }
  // Jika bilangan sama dengan 2, maka prima
  else if (bilangan == 2) {
    prima = 1;
  }
  // Jika bilangan lebih dari 2, maka lakukan perulangan dari 2 hingga akar kuadrat bilangan
  else {
    for (int i = 2; i <= sqrt(bilangan); i++) {
      // Jika bilangan habis dibagi dengan i, maka bukan prima dan hentikan perulangan
      if (bilangan % i == 0) {
        prima = 0;
        break;
      }
    }
  }
}

// Fungsi untuk menampilkan hasil ke layar
void output_hasil() {
  // Jika status prima adalah 1, maka tampilkan bilangan prima
  if (prima == 1) {
    cout << "Bilangan " << bilangan << " adalah bilangan prima\n";
  }
  // Jika status prima adalah 0, maka tampilkan bilangan bukan prima
  else {
    cout << "Bilangan " << bilangan << " bukan bilangan prima\n";
  }
}

// Fungsi utama
int main() {
  // Memanggil fungsi input bilangan
  input_bilangan();
  // Memanggil fungsi cek prima
  cek_prima();
  // Memanggil fungsi output hasil
  output_hasil();
  return 0;
}