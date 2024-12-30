#include <iostream>
using namespace std;

int main() {
  // deklarasi array dan variabel
  int arr[] = {10, 30, 20, 15, 21, 31};
  int n = sizeof(arr) / sizeof(arr[0]);
  int max, temp, index;

  for (int i = 0; i < n - 1; i++) { 
    max = arr[i]; 
    index = i;
    for (int j = i + 1; j < n; j++) { 
      if (arr[j] > max) { 
        max = arr[j]; 
        index = j; 
      }
    }
    temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
  }
  cout << "Array sebelum diurutkan: 10 30 20 15 21 31\n";
  cout << "Array setelah diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}