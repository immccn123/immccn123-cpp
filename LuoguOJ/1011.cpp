#include <iostream>
using namespace std;
int ppx[25] = {0,0,0,0}, ppa[25] = {0,1,1,2};
int main()
{
    int a, n, m, x;
    cin >> a >> n >> m >> x;
    for(int i = 4;i < n;i++)
    {
        ppx[i] = ppx[i - 1] + ppx[i - 2] + 1;
        ppa[i] = ppa[i - 1] + ppa[i - 2] - 1;
    }
    int xb = (m - ppa[n - 1] * a) / ppx[n - 1];
    int tmp = (ppx[x]*xb + ppa[x]*a);
    cout << tmp;
    return 0;
}


