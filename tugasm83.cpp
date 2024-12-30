#include<iostream>
using namespace std;

int main() {
    int int1, int2;
    float float1, float2;

    cout << "Ketik dua integer = ";
    cin >> int1 >> int2;

    cout << "Ketik dua float = ";
    cin >> float1 >> float2;

    if(int1 == int2) {
        cout << "Kedua integer bernilai sama";
    } else {
        cout << "Kedua integer berbeda";
    }

    if(float1 == float2) {
        cout << " dan kedua float bernilai sama." << endl;
    } else {
        cout << " dan kedua float berbeda." << endl;
    }

    return 0;
}