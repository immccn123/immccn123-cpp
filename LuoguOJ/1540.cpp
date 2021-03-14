#include<bits/stdc++.h>
using namespace std;
queue<long long> mem;
bool searchQueue(queue<long long> q, long long searchValue) {
    int pos = 0;
    bool searchFlag = false;
    for(int i=0; i<q.size(); ++i) {
        if(q.front() == searchValue && !searchFlag) {
            return true;
        }
        else {
            q.push(q.front());
            q.pop();
            pos++;
        }
    }
    return false;
}
int main()
{
	int m, n;
	int count = 0;
	long long tmp;
	cin >> m >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> tmp;
		if(searchQueue(mem, tmp)) continue;
		mem.push(tmp);
		count++;
		if(mem.size() > m) mem.pop();
		
	}
	cout << count;
	return 0;
}