#include<iostream>
using namespace std;

int main() {
    int nilai;
    char grade;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai < 45) {
        grade = 'E';
    } else if (nilai < 56) {
        grade = 'D';
    } else if (nilai < 68) {
        grade = 'C';
    } else if (nilai < 80) {
        grade = 'B';
    } else {
        grade = 'A';
    }

    cout << "Grade: " << grade << endl;

    return 0;
}