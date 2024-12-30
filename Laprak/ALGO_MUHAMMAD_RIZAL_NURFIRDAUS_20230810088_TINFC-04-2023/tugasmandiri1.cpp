#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a =-123456789;
    double b=-550.987654321234;
    
    cout << "a." << a << endl;
    cout << "b." <<setprecision (15) << b << endl;
    return 0;
}
