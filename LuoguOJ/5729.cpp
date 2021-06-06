#include <iostream>
using namespace std;
const int MAX = 21;
int qwq[MAX][MAX][MAX];
int main()
{
	int w, x, h, q;
	int x1, y1, z1, x2, y2, z2;
	int sum = 0;
	cin >> w >> x >> h >> q;
	for(int i = 1;i <= w;i++) for(int j = 1;j <= x;j++) for(int k = 1;k <= h;k++) qwq[i][j][k] = 0;
	while(q--)
	{
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		for(int i = x1;i <= x2;i++)
			for(int j = y1;j <= y2;j++)
				for(int k = z1;k <= z2;k++) qwq[i][j][k] = 1;
	}
	for(int i = 1;i <= w;i++) for(int j = 1;j <= x;j++) for(int k = 1;k <= h;k++) if(!qwq[i][j][k]) sum++;
	cout << sum;
}