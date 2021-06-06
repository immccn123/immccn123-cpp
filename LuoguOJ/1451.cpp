//一矩形阵列由数字 0 到 9 组成，数字 1 到 9 代表细胞，
//细胞的定义为沿细胞数字上下左右若还是细胞数字则为同一细胞，求给定矩形阵列的细胞个数。
#include <iostream>
#include <queue>
using namespace std;
struct Point
{
    int x;
    int y;
};
queue<Point> q;
int visit[101][101];
char map[101][101];
int n, m, sum;
void push(int x, int y)
{
    if(x<0||y<0||x>=n||y>=m) return;
    if(visit[x][y]) return;
    if(map[x][y] == '0') return;
    Point tmp = {x, y};
    q.push(tmp);
    visit[x][y] = 1;
    return;
}
int main()
{
    int x1, y1;
    char m1;
    cin >> n >> m;
    for(int i = 0;i < n;i++) cin >> map[i];
    for(int i = 0;i < n;i++)
    for(int j = 0;j < m;j++)
    {
        if(visit[i][j]!=0||map[i][j]=='0') continue;
        push(i,j);
        while(!q.empty())
        {
            Point tmp = q.front();
            x1=tmp.x; y1=tmp.y;
            push(x1+1,y1);
            push(x1-1,y1);
            push(x1,y1+1);
            push(x1,y1-1);
            q.pop();
        }
        sum++;
    }
    cout << sum;
    return 0;
}