#include <iostream>
using namespace std;

int main() {
    char letter = 'A';
    int x = letter;

    while (x <= 'Z') {
        cout << letter << " ";
        letter++;
        x = letter;
    }

    return 0;
}