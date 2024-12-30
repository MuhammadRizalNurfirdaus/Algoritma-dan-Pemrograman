#include <iostream>

void perkalianMatriks(int matriks1[][3], int baris1, int kolom1,
                      int matriks2[][3], int baris2, int kolom2,
                      int hasil[][3]) {
    for (int i = 0; i < baris1; ++i) {
        for (int j = 0; j < kolom2; ++j) {
            hasil[i][j] = 0;
            for (int k = 0; k < kolom1; ++k) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}

void tampilkanMatriks(const int matriks[][3], int baris, int kolom) {
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            std::cout << matriks[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    const int baris1 = 2;
    const int kolom1 = 3;
    const int baris2 = 3;
    const int kolom2 = 3;

    int matriks1[baris1][3] = {{2, 2, 2},
                               {3, 3, 3}};

    int matriks2[3][3] = {{4, 4, 4},
                          {5, 5, 5},
                          {6, 6, 6}};

    int hasil[baris1][3];

    perkalianMatriks(matriks1, baris1, kolom1, matriks2, baris2, kolom2, hasil);

    std::cout << "Matriks 1:\n";
    tampilkanMatriks(matriks1, baris1, kolom1);

    std::cout << "\nMatriks 2:\n";
    tampilkanMatriks(matriks2, baris2, kolom2);

    std::cout << "\nHasil perkalian matriks:\n";
    tampilkanMatriks(hasil, baris1, kolom2);

    return 0;
}