#include <stdio.h>

int main() {
    char operator;
    double angka1, angka2;

    // Meminta input dari pengguna
    printf("Masukkan operator (+, -, *, atau /): ");
    scanf(" %c", &operator);  // Perhatikan spasi sebelum format specifier %c untuk menangani newline

    printf("Masukkan dua angka: ");
    scanf("%lf %lf", &angka1, &angka2);

    // Melakukan operasi sesuai dengan operator
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", angka1, angka2, angka1 + angka2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", angka1, angka2, angka1 - angka2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", angka1, angka2, angka1 * angka2);
            break;
        case '/':
            if (angka2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", angka1, angka2, angka1 / angka2);
            } else {
                // Menangani pembagian oleh nol
                printf("Error: Pembagian oleh nol tidak diizinkan\n");
            }
            break;
        default:
            // Menangani operator tidak valid
            printf("Error: Operator tidak valid\n");
    }

    return 0;
}