#include <iostream>
using namespace std;
int gcd(int m, int n) {
    int t = m > n ? n: m;
    m = m > n ? m: n;
    n = t;
    if (m % n == 0)
        return n;
    return gcd(m % n, n);
}
int main()
{
    int a, b, c, d;
    char xiegang;
    cin >> a >> xiegang >> b >> c >> xiegang >> d;
    int fenzi = a * c;
    int fenmu = b * d;
    int g = gcd(fenzi,fenmu);
    cout << (fenmu / g) << ' ' << (fenzi / g);
    return 0;
}