#include <iostream>
#include <algorithm> 
#include <cstdlib>    
#include <ctime>      

using namespace std;

void mergeArrays(int arr1[], int arr2[], int size1, int size2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        }
        else {
            result[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        result[k++] = arr1[i++];
    }
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    const int arraySize = 100;
    int arr1[arraySize];
    int arr2[arraySize];

    srand(time(0));

    for (int i = 0; i < arraySize; ++i) {
        arr1[i] = rand() % 1000;
    }

    for (int i = 0; i < arraySize; ++i) {
        arr2[i] = rand() % 1000; 
    }

    sort(arr1, arr1 + arraySize);
    sort(arr2, arr2 + arraySize);

    cout << "Array 1 sebelum digabung:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array 2 sebelum digabung:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int result[2 * arraySize];
    mergeArrays(arr1, arr2, arraySize, arraySize, result);

    cout << "Array 1 dan 2 hasil penggabungan:" << endl;
    for (int i = 0; i < 2 * arraySize; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}