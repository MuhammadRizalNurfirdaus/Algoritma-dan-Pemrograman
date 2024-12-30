#include <iostream>
using namespace std;

int main() {
  // deklarasi array dan variabel
  int arr[] = {10, 30, 20, 15, 21, 31};
  int n = sizeof(arr) / sizeof(arr[0]);
  int temp;

  for (int i = 0; i < n - 1; i++) { 
    for (int j = 0; j < n - i - 1; j++) { 
      if (arr[j] > arr[j + 1]) { 
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  cout << "Array sebelum diurutkan: 10 30 20 15 21 31\n";
  cout << "Array sesudah diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}
