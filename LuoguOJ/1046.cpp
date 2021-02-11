#include <iostream>
using namespace std;
int cm[10];
int tall;
int count = 0;
int main()
{
    for(int i = 0;i < 10;i++)
    {
        cin >> cm[i];
    }
    cin >> tall;
    for(int i = 0;i < 10;i++) if(cm[i] <= (tall + 30)) count++;
    cout << count;
    return 0;
}
