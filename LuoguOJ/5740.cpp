#include <iostream>
using namespace std;
int main()
{
	int stu = 0;
	int score[1001];
	int a[1001],b[1001],c[1001];
	string name[1001];
	int max_index = 0;
	cin >> stu;
	for(int i = 0;i < stu;i++)
	{
		cin >> name[i] >> a[i] >> b[i] >> c[i];
		score[i] = a[i] + b[i] + c[i];
	}
	for(int i = 0;i < stu;i++)
	{
		if(score[i] > score[max_index])
		{
			max_index = i;
		}
	}
	cout << name[max_index] << ' ' << a[max_index] << ' ' << b[max_index] << ' ' << c[max_index];
	return 0;
}
