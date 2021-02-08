#include <iostream>
using namespace std;
int main()
{
    int x, n, km;
    cin >> x >> n;
    for(int i = 0;i < n;i++,x++)
    {
        if(x % 7 != 0 && x % 7 != 6)
            km += 250;
    }
    cout << km;
}