#include <iostream>
using namespace std;
int a[10][10];
struct L
{
    int x;
    int y;
} locate = {1,1};
int main()
{
    int n;
    cin >> n;
    int tmp = n;
    int now = 1;
    for(int i = 1;i <= n;i++)
    {
        // r
        for(int j = 1;j <= tmp;j++)
        {
            a[locate.x][locate.y] = now;
            locate.x++;
            now++;
        }
        locate.x--;
        tmp--;
        // d
        for(int j = 1;j <= tmp;j++)
        {
            a[locate.x][locate.y] = now;
            locate.y++;
            now++;
        }
        //locate.y--;
        // l
        for(int j = 1;j <= tmp;j++)
        {
            a[locate.x][locate.y] = now;
            locate.x--;
            now++;
        }
        //locate.x++;
        tmp--;
        // u
        for(int j = 1;j <= tmp;j++)
        {
            a[locate.x][locate.y] = now;
            locate.y--;
            now++;
        }
        //locate.y++;
    }
    for(int i = 1;i <= 10;i++)
    {
        for(int j = 1;j <= 10;j++)
        {
            if(a[j][i] == 0) continue;
            cout << a[j][i] << ' ';
        }
        cout << endl;
    }
    
}