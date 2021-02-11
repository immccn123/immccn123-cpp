#include <iostream>
using namespace std;
int main()
{
    int length, aera;
    int count = 0;
    cin >> length;
    bool flag[length+1];
    for(int i = 0;i < length + 1;i++) flag[i] = true;
    cin >> aera;
    int s, e;
    for(int i = 0;i < aera;i++)
    {
        cin >> s >> e;
        for(int j = s;j <= e;j++) flag[j] = false;
    }
    for(int i = 0;i <= length;i++) if(flag[i]) count++;
    cout << count;
    return 0;
}
