#include <iostream>
using namespace std;
long long outstream[100000];
int main()
{
    long long n;
    cin >> n;
    long long tmp = n;
    int i = 99999;
    while(n != 1 && i != 0)
    {
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        outstream[i] = n;
        i--;
    }
    for(i = 0;i < 100000;i++)
    {
        if(outstream[i] == 0) continue;
        cout << outstream[i] << ' ';
    }
    cout << tmp << ' ';
    return 0;
}
//ALL AC