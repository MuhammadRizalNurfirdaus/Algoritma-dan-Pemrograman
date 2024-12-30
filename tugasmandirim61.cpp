#include <iostream>
using namespace std;

int main ()
{
    int n, m;
    cout << "Masukkan jumlah baris matriks: ";
    cin >> n;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> m;

    int matriks[n][m];
    int i, j;

    cout << "Isi data matriks" << endl;
    for(i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cout << "Matriks [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    cout << "Hasil data inputan matriks " << n << "*" << m << " :" << endl;
    for(i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}