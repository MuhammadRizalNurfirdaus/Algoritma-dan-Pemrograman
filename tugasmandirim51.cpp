#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Masukkan tinggi segitiga siku-siku: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        k = n;
        for (int j = n; j >= 1; j--)
        {
            if (k > i)
            {
                cout << " ";
            }
            else
            {
                cout << "@";
            }
            k--;
        }
        cout << endl;
    }
    return 0;
}