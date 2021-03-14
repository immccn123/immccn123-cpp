#include <iostream>
using namespace std;
int main()
{
    int a[6][5];
    int count = 1;
    for(int i = 0;i < 6;i++)
    for(int j = 0;j < 5;j++)
    {
        a[i][j] = count;
        count++;
    }
    cout << a[0][0] << ' ' << a[5][4];
    return 0;
}