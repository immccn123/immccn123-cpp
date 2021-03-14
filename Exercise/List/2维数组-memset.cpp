#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][5];
    memset(a[1],0,sizeof(a[1]));
    cout << a[1][0];
    int count = 0;
    for(int i = 0;i < 6;i++)
    for(int j = 0;j < 5;j++)
    {
        a[i][j] = count;
        count++;
    }
    for(int i = 0;i < 6;i++)
    {   
        for(int j = 0;j < 5;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j < 6;j++)
        {
            cout << a[j][i] << ' ';
        }
        cout << endl;
    }
    cout << "\n\n\n";
    for(int i = 0;i < 5;i++) cout << a[i][i] << ' ';
    cout << endl;
    return 0;
}