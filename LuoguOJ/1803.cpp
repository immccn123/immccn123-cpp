/*
	Name: 1803
	Copyright: ---
	Author: immccn123
	Date: 06/12/20 16:20
	Description: ÁèÂÒµÄyyy / Ïß¶Î¸²¸Ç
*/
#include <iostream>
#include <algorithm>
using namespace std;
struct Meet
{
	long long start_ti;
	long long end_ti;
	long long len;
} meet[10000001];
bool st(Meet a,Meet b)
{
	return a.end_ti < b.end_ti;
}
int main()
{
	long long now_end_ti = -1;
	long long i = 0,m = 0;
	cin >> m;
	for(long long j = 0;j < m;j++) cin >> meet[j].start_ti >> meet[j].end_ti;
	sort(meet,meet+m,st);
	now_end_ti = meet[0].end_ti;
	long long s = 1;
	for(i = 0;i < m;i++)
	{
        if(meet[i].start_ti>=now_end_ti)
        {
	        s++;
	        now_end_ti=meet[i].end_ti;
		}
	}
	cout << s << endl;
	return 0;
}
/*
ÑùÀý1:
in: 
10
7 8
1 7
0 3
4 9
0 6
5 7
0 3
7 8
7 10
4 7

out:
(1)3
*/
 
