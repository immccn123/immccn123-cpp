#include <iostream>
using namespace std;
int arr[1000] = {0};
bool run(int y)
{
	if(y % 100 == 0) {if(y % 400 == 0) return 1;}
	else if(y % 4 == 0) return 1;
	return 0;
}
int main()
{
	int s, e;
	cin >> s >> e;
	int count = 0;
	int ind = 0;
	for(int i = s;i <= e;i++)
	{
		if(run(i))
		{
			arr[ind] = i;
			ind++;
			count++;
		}
	}
	cout << count << endl;
	for(int i = 0;i < count;i++) cout << arr[i] << ' ';
}