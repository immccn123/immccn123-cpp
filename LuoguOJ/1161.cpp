#include <iostream>
using namespace std;
bool light[2000000];
long long n;
int main()
{
    cin >> n;
    double a;
    int t;
    for(int i = 0;i < n;i++)
    {
        cin >> a >> t;
        for(int j = 1;j <= t;j++)
        {
            light[(int)(j * a)] = !light[(int)(j * a)];
        }
    }
    int i = 0;
    while(light[i] != 1) i++;
    cout << i;
    return 0;
}