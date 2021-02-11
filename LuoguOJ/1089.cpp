#include <iostream>
using namespace std;
const int myhmon = 300;
int main()
{
    int jpocket = 0, bank = 0, mys;
    for(int i = 1;i <= 12;i++)
    {
        jpocket += myhmon;
        cin >> mys;
        jpocket -= mys;
        if(jpocket < 0)
        {
            cout << '-' << i;
            return 0;
        }
        bank += jpocket / 100;
        jpocket %= 100;
    }
    cout << (120*((double)(bank)) + jpocket);
    return 0;
}