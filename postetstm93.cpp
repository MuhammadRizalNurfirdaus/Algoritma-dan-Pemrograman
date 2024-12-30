#include <iostream>
#include <map>
#include <vector>
using namespace std;
void calculateFrequencyAndAverage(vector<int>& data) {
    map<int, int> frequency;
    double sum = 0.0;
    for (int num : data) {
        frequency[num]++;
        sum += num;
    }
    cout << "Frekuensi data:\n";
    for (auto& pair : frequency) {
        cout << "Data " << pair.first << " muncul " << pair.second << " kali\n";
    }
    double average = sum / data.size();
    cout << "Rata-rata data: " << average << "\n";
}
int main() {
    vector<int> data;
    int input;
    cout << "Masukkan data (masukkan -1 untuk berhenti):\n";
    while (cin >> input && input != -1) {
        data.push_back(input);
    }
    calculateFrequencyAndAverage(data);

    return 0;
}