#include <iostream>
using namespace std;
void mem(int num)
{
	cin >> num;
	if(num == 0) return;
	mem(num);
	if(num != -1) cout << num << ' ';
	return;
}
int main()
{
	mem(-1);
	return 0;
}