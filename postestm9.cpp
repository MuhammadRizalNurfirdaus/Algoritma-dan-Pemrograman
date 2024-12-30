#include <iostream>
#include <cstring>
using namespace std;
void salinString(const char *sumber, void (*fungsiSalin)(const char*)) {
fungsiSalin(sumber);
}
void tampilkanString(const char *salinan) {
cout << "String Salinan: " << salinan << endl;
}
int main() {
cout << "Masukkan string: ";
string input;
getline(cin, input);
const char *sumber = input.c_str();
salinString(sumber, tampilkanString);
return 0;
}