#include <iostream>
#include <cstdio>
using namespace std;
char a[9];
int main()
{
    char num[8];
    int count = 0;
    cin >> num;
    for(int i = 0;i < 8;i++)
    {
        if(num[i] == '1')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}

