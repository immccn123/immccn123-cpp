/*
    copyright (c) Luo Youxi
    Use WTFPL2 License
*/

#include <iostream>
using namespace std;
int main()
{
    long t;
    cin >> t;
    long long n;
    for(int i = 0;i < t;i++)
    {
        cin >> n;
        if(n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        cout << 1ll * n * (n - 1) << endl;
    }
    return 0;
}