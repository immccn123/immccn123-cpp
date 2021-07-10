#include <iostream>
#define ll unsigned long long
using namespace std;
ll a[1001], k, N, ans, tmp = 0;
ll pow(ll x, ll n)
{
    if (n == 0)
        return 1;
    ll t = 1;
    while (n)
    {
        if (n & 1)
        {
            t *= x;
        }
        n >>= 1;
        x = (ll)(x * x);
    }
    return t;
}
int main()
{
    cin >> N >> k;
    while (k)
        a[++tmp] = k % 2, k /= 2;
    for (int i = tmp; i >= 1; i--)
        ans += pow(N, i - 1) * a[i];
    cout << ans;
    return 0;
}