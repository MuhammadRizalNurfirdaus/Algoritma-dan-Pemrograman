#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Deklarasi struktur untuk menyimpan informasi produk
struct Produk {
    string nama;
    int harga;
    int jumlah;
};

// Fungsi untuk menampilkan daftar produk
void tampilkanDaftarProduk(const vector<Produk>& produk) {
    cout << "Daftar Produk:" << endl;
    cout << setw(3) << "No" << setw(30) << "Nama Produk" << setw(10) << "Harga" << endl;
    cout << setfill('-') << setw(43) << "-" << setfill(' ') << endl;

    for (int i = 0; i < produk.size(); ++i) {
        cout << setw(3) << i + 1 << setw(30) << produk[i].nama << setw(10) << produk[i].harga << endl;
    }
    cout << setfill('-') << setw(43) << "-" << setfill(' ') << endl;
}

// Fungsi untuk melakukan transaksi
void transaksi(vector<Produk>& produk) {
    int totalHarga = 0;
    char lanjut;

    do {
        int nomorProduk, jumlah;

        // Meminta input nomor produk
        cout << "Masukkan nomor produk: ";
        cin >> nomorProduk;

        // Mengecek apakah nomor produk valid
        if (nomorProduk >= 1 && nomorProduk <= produk.size()) {
            // Meminta input jumlah
            cout << "Masukkan jumlah: ";
            cin >> jumlah;

            // Menambahkan total harga
            totalHarga += produk[nomorProduk - 1].harga * jumlah;

            // Menyimpan jumlah produk yang dibeli
            produk[nomorProduk - 1].jumlah += jumlah;

            cout << "Produk ditambahkan ke keranjang." << endl;
        } else {
            cout << "Nomor produk tidak valid." << endl;
        }

        // Menanyakan apakah ingin menambah produk lainnya
        cout << "Ingin menambah produk lainnya? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    // Menawarkan diskon jika membeli 10 baju atau lebih
    if (totalHarga >= 10 * produk[0].harga) {
        cout << "Anda mendapatkan diskon 10%!" << endl;
        totalHarga *= 0.9; // Diskon 10%
    }

    // Menampilkan total harga
    cout << "Total harga: " << totalHarga << " Rupiah" << endl;

    // Meminta input pembayaran
    int pembayaran;
    cout << "Masukkan jumlah pembayaran: ";
    cin >> pembayaran;

    // Menghitung kembalian
    int kembalian = pembayaran - totalHarga;

    // Menampilkan struk pembelian
    cout << "==== Struk Pembelian ====" << endl;
    for (int i = 0; i < produk.size(); ++i) {
        cout << produk[i].nama << " x " << produk[i].jumlah << " = " << produk[i].harga * produk[i].jumlah << " Rupiah" << endl;
    }
    cout << "-------------------------" << endl;
    cout << "Total Harga      : " << totalHarga << " Rupiah" << endl;
    cout << "Pembayaran       : " << pembayaran << " Rupiah" << endl;
    cout << "Kembalian        : " << kembalian << " Rupiah" << endl;
    cout << "=========================" << endl;

    // Menawarkan tawaran tambahan
    if (totalHarga > 0) {
        cout << "Selamat! Anda berhak mendapatkan voucher diskon 5% untuk transaksi selanjutnya." << endl;
    }
}

int main() {
    char ulangi;

    do {
         // Inisialisasi daftar produk
        vector<Produk> daftarProduk = {
            {"Baju Kemeja Hitam", 100000, 0},
            {"Baju Kemeja Putih", 100000, 0},
            {"Baju Polos", 25000, 0},
            {"Baju Seragam Sekolah SMA", 80000, 0},
            {"Baju Seragam Sekolah SMP", 70000, 0},
            {"Baju Seragam Sekolah SD", 50000, 0},
            {"Baju Anak", 15000, 0},
            {"Baju Koko", 150000, 0},
            {"Baju Gamis", 200000, 0},
            {"Baju Olahraga", 40000, 0},
        };

        // Menampilkan daftar produk
        tampilkanDaftarProduk(daftarProduk);

        // Memulai transaksi
        transaksi(daftarProduk);

        // Menanyakan apakah ingin menjalankan program kembali
        cout << "Ingin menjalankan program kembali? (y/n): ";
        cin >> ulangi;

    } while (ulangi == 'y' || ulangi == 'Y');

    return 0;
}