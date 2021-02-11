#include <bits/stdc++.h>
using namespace std;
int T(int a)
{
    return (a * (a + 1))/2;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int zc = T(n) * T(m);
    int z;
    int nn = min(n,m);
    z = m * n * (nn + 1) + nn * (nn + 1) * (2 * nn + 1) / 6 - (m + n) * nn * (nn + 1) / 2;
    cout << z << ' ' << (zc - z);
    return 0;
}