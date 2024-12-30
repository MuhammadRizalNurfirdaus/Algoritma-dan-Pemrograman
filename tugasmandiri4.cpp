#include <iostream>

using namespace std;

// Deklarasi variabel untuk menyimpan waktu
int jam, menit;

// Fungsi untuk meminta input dari pengguna
void input_waktu() {
  cout << "Masukkan jam saat ini (0-23): ";
  cin >> jam;
  cout << "Masukkan menit saat ini (0-59): ";
  cin >> menit;
}

// Fungsi untuk menampilkan kegiatan yang sesuai dengan waktu
void output_kegiatan() {
  cout << "\nKegiatan yang harus Anda lakukan adalah:\n";
  // Menggunakan switch-case berdasarkan nilai jam
  switch (jam) {
    // Jika jam adalah 4
    case 4:
      cout << "Bangun pagi dan sholat shubuh\n";
      break;
    // Jika jam adalah 5
    case 5:
      // Menggunakan switch-case berdasarkan nilai menit
      switch (menit) {
        // Jika menit antara 0 dan 30
        case 0 ... 30:
          cout << "Bersihkan kasur\n";
          break;
        // Jika menit antara 31 dan 60
        case 31 ... 60:
          cout << "Sarapan\n";
          break;
      }
      break;
    // Jika jam adalah 6
    case 6:
      cout << "Sarapan\n";
      break;
    // Jika jam adalah 7
    case 7:
      // Menggunakan switch-case berdasarkan nilai menit
      switch (menit) {
        // Jika menit antara 0 dan 15
        case 0 ... 15:
          cout << "Mandi\n";
          break;
        // Jika menit antara 16 dan 60
        case 16 ... 60:
          cout << "Pergi ke kampus\n";
          break;
      }
      break;
    // Jika jam antara 8 dan 15
    case 8 ... 15:
      cout << "Belajar di kampus\n";
      break;
    // Jika jam adalah 16
    case 16:
      cout << "Membersihkan rumah bagian dalam\n";
      break;
    // Jika jam adalah 17
    case 17:
      cout << "Mandi\n";
      break;
    // Jika jam adalah 18
    case 18:
      cout << "Sholat maghrib\n";
      break;
    // Jika jam adalah 19
    case 19:
      // Menggunakan switch-case berdasarkan nilai menit
      switch (menit) {
        // Jika menit antara 0 dan 30
        case 0 ... 30:
          cout << "Sholat isya\n";
          break;
        // Jika menit antara 31 dan 60
        case 31 ... 60:
          cout << "Makan malam\n";
          break;
      }
      break;
    // Jika jam adalah 20
    case 20:
      cout << "Mengerjakan tugas\n";
      break;
    // Jika jam antara 21 dan 23
    case 21 ... 23:
      cout << "Tidur\n";
      break;
    // Jika jam adalah 0
    case 0:
      cout << "Tidur\n";
      break;
    // Jika jam antara 1 dan 3
    case 1 ... 3:
      cout << "Tidur\n";
      break;
    // Jika jam tidak sesuai dengan kasus di atas
    default:
      cout << "Jam yang Anda masukkan tidak valid\n";
      break;
  }
}

// Fungsi utama
int main() {
  // Memanggil fungsi input waktu
  input_waktu();
  // Memanggil fungsi output kegiatan
  output_kegiatan();
  return 0;
}