#include <iostream>
using namespace std; 
int matriks [4][4]; int i, j;
int main ()
{
    cout<< "Isi data matriks" << endl;
    for(i=0; i<j; i++)
{
for (j=0; j<i; j++)
{
cout<< "Matriks ["<<i<<"]["<<j<<"]:"; cin>>matriks [i][j];
}
}
cout<<"Hasil data inputan matriks 4*4 :"<<endl;
for(i=0; i<4; i++)
{
for (j=0; j<4; j++)
{
cout<<matriks [i][j]<<" ";
}
cout<<endl;
}
}    