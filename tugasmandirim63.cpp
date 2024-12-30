#include<iostream>
using namespace std;

int main() {
    int x, y, z;
    int cube[10][10][10] = {
        {
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,1,1,1,1,1,1,1},
            {0,0,1,1,1,1,1,1,1,2},
            {0,1,1,1,1,1,1,1,0,2},
            {1,1,1,1,1,1,1,0,0,2},
            {2,0,0,0,0,0,2,0,0,2},
            {2,0,0,0,0,0,2,0,0,2},
            {2,0,0,0,0,0,2,0,2,0},
            {2,3,3,3,3,3,2,2,0,0},
            {0,0,0,0,0,0,0,0,0,0}
        }
    };

    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            for (z = 0; z < 10; z++) {
            
                if (cube[x][y][z] == 0)
                    cout << " ";
                
                else if (cube[x][y][z] == 1)
                    cout << "-";
                
                else if (cube[x][y][z] == 2)
                    cout << "/";  
                else if (cube[x][y][z] == 3)
                    cout << "_";
                else
                    cout << '\x20';
            }
            cout << endl;
        }
        cout << endl;  
    }

    return 0;
}