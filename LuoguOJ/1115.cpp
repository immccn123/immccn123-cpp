#include <iostream>
using namespace std;
int max(int a,int b)
{
	if(a > b) return a;
	else return b;
}

int main()
{
    int n[200001], p, lst[200001]={0};
    int sum=-0xc3c3c3;
    cin >> p;
    for(int i=1;i<=p;i++)
    {
        cin >> n[i];
        lst[i] = max(lst[i-1] + n[i],n[i]);
        sum = max( sum, lst[i]);
    }
    cout << sum;
    return 0;
}
