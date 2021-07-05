// SpaceShip.cpp  
 
#include <iostream>
using namespace std;

int main()
{
    
    char n[4][4];
    for (int i = 0; i < 4; i++)
    {
        
        n[i][3] = 'x';
    }
    for (int i = 0; i < 4; i++)
    {
        n[3][i] = 'y';
    }
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << n[i][j] << ' ';
        }
    }
    return 0;
}
 