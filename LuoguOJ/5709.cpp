// 于2021年3月11日通过
#include <iostream>
using namespace std;
int main()
{
    int m, t, s;
    cin >> m >> t >> s;
    if(t == 0)
    {
        cout << 0;
        return 0;
    }
    if(s % t == 0) cout << max(0,m-s/t);
    else cout << max(0,m-s/t-1);
}
