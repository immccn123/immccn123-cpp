#include <iostream>
#include <queue>
using namespace std;
queue<long> q;
int out(int m)
{
    for(int count = 0;count == m;count++)
    {
        q.push(q.front());
        q.pop();
    }
    int r = q.front();
    q.pop();
    return r;
}
int main()
{
    int m, n;
    cin >> n >> m;
    for(int i = 1;i <= n;i++) q.push(i);
    while(!q.empty())
    {
        cout << out(m) << ' ';
    }
}