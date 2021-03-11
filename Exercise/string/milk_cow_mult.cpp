#include <iostream>
using namespace std;
int main()
{
    string a = "", b = "";
    string c;
    bool flag = false;
    long long sum = 0;
    cin >> a >> b;
    // 提取乘数至a, b
    // for(int i = 0;i < c.length();i++)
    // {
    //     if(flag)
    //     {
    //         b = b + c[i];continue;
    //     }
    //     if(c[i] == '*')
    //     {
    //         flag = 1;continue;
    //     }
    //     a = a + c[i];
    // }
    for(int i = 0;i < a.length();i++)
    for(int j = 0;j < b.length();j++)
    {
        sum += (a[i] - '0') * (b[j] - '0');
    }
    cout << sum;    
    return 0;
}