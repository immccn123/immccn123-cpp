#include <iostream>
#include <stack>
bool visit[9] = {false};
using namespace std;
stack<int> ss;
int graph[8][8] = { {0,1,1,0,0,0,0,0},
                    {1,0,0,1,1,0,0,0},
                    {1,0,0,0,0,0,1,1},
                    {0,1,0,0,0,1,0,0},
                    {0,1,0,0,0,1,0,0},
                    {0,0,0,1,1,0,0,0},
                    {0,0,1,0,0,0,0,1},
                    {0,0,1,0,0,0,1,0}};
void s(int n)
{
    if(visit[n] || n > 8) return;
    visit[n] = true;
    cout << n << ' ';
    for(int i = 1;i <= 8;i++) if(graph[n][i] || graph[i][n]) s(i);
    return;
}
int main()
{
    //int tmp;
    s(1);
}