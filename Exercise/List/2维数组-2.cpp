#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[7][7];
    for(int i = 0;i < 7;i++)
    for(int j = 0;j < 7;j++)
    cin >> a[i][j];
    for(int i = 0;i < 7;i++)
    {
        a[i][i] += 10;
        if(i == 3) continue;
        a[6 - i][i] += 10;
    }
    cout << "\n\n\n\n\n\n\n\n\n";
    for(int i = 0;i < 7;i++)
    {
        for(int j = 0;j < 7;j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    
}