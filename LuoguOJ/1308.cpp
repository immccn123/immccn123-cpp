// +-32 -> 大小写
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("1.txt","r",stdin);
    string f, str;
    int locate = 0, sum = 0, tmp;
    string STATUS = "NO";
    int ind = 0;
    cin >> f;
    getline(cin, str);
    for(int i = 0;i < f.length();i++) if(f[i] >= 'A' && f[i] <= 'Z') f[i] -= 32;
    for(int i = 0;i < str.length();i++) if(str[i] >= 'A' && str[i] <= 'Z') str[i] -= 32;
    for(int i = 0;i < str.length();i++)
    {
        if(str[i] == ' ')
        {

        }
    }
    cout << sum << ' ' << ind;
    return 0;
}