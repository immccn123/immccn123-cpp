#include <bits/stdc++.h>
using namespace std;
int t1[3000][3000], t2[3000][3000];
int main()
{
    int count = 0;
    int s;
    cin >> s;
    for(int i = 0;i < s;i++) for(int j = 0;j < s;j++) cin >> t1[i][j];
    for(int i = 0;i < s;i++) for(int j = 0;j < s;j++) cin >> t2[i][j];
    for(int i = 0;i < s;i++) for(int j = 0;j < s;j++) if(t1[i][j] == t2[i][j]) count++;
    double tmp = (1.0 * count) / (s * s) * 100;
    cout << setprecision(4) << tmp;
    return 0;
}