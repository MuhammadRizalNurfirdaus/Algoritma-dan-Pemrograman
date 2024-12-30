#include <iostream>
#include <cstring>
using namespace std;
int hitungJumlahKarakter(const char *kalimat) {
    return strlen(kalimat);
}
void salinDariKiri(const char *sumber, char *tujuan) {
    strcpy(tujuan, sumber);
}
int main() {
    cout << "Masukkan kalimat: ";
    string input;
    getline(cin, input);
    const char *kalimat = input.c_str();
    int jumlahKarakter = hitungJumlahKarakter(kalimat);
    cout << "Jumlah karakter dalam kalimat: " << jumlahKarakter << endl;
    char *salinanKiri = new char[jumlahKarakter + 1];
    salinDariKiri(kalimat, salinanKiri);
    cout << "Salinan dari kiri ke kanan: " << salinanKiri << endl;

    delete[] salinanKiri;

    return 0;
}