#include <iostream>
using namespace std;

// Deklarasi variabel untuk menyimpan pemakaian air, tarif per meter, dan total tagihan
int pemakaian, tarif, tagihan;

// Fungsi untuk meminta input dari pengguna
void input_pemakaian() {
  cout << "Masukkan pemakaian air Anda dalam meter: ";
  cin >> pemakaian;
}

// Fungsi untuk menentukan tarif per meter berdasarkan pemakaian air
void tentukan_tarif() {
  // Jika pemakaian air kurang dari atau sama dengan 10 meter, maka tarif per meter adalah 5.000
  if (pemakaian <= 10) {
    tarif = 5000;
  }
  // Jika pemakaian air lebih dari 10 meter dan kurang dari atau sama dengan 30 meter, maka tarif per meter adalah 7.500
  else if (pemakaian > 10 && pemakaian <= 30) {
    tarif = 7500;
  }
  // Jika pemakaian air lebih dari 30 meter dan kurang dari atau sama dengan 50 meter, maka tarif per meter adalah 10.000
  else if (pemakaian > 30 && pemakaian <= 50) {
    tarif = 10000;
  }
  // Jika pemakaian air lebih dari 50 meter, maka tarif per meter adalah 15.000
  else {
    tarif = 15000;
  }
}

// Fungsi untuk menghitung total tagihan
void hitung_tagihan() {
  // Mengalikan pemakaian air dengan tarif per meter
  tagihan = pemakaian * tarif;
}

// Fungsi untuk menampilkan total tagihan ke layar
void output_tagihan() {
  cout << "\nTotal tagihan air Anda adalah: Rp. " << tagihan << "\n";
}

// Fungsi utama
int main() {
  // Memanggil fungsi input pemakaian
  input_pemakaian();
  // Memanggil fungsi tentukan tarif
  tentukan_tarif();
  // Memanggil fungsi hitung tagihan
  hitung_tagihan();
  // Memanggil fungsi output tagihan
  output_tagihan();
  return 0;
}