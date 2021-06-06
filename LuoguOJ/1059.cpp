#include <iostream>
#include <cmath>
using namespace std;
bool found[1004], found2[1004];
int a[101];
void qsort(int l,int r)
{
    int mid=a[(l+r)/2];
    int i=l,j=r;
    do{
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j) qsort(l,j);
    if(i<r) qsort(i,r);
}
int main()
{
	int n, sum = 0;
	cin >> n;
	for(int i = 1;i <= n;i++) cin >> a[i];
	qsort(1,n);
	for(int i = 1;i <= n;i++)
	{
		if(!found[a[i]])
		{
			found[a[i]] = 1;
			// cout << a[i] << ' ';
			sum++; 
		}
	}
	cout << sum << endl;
	for(int i = 1;i <= n;i++)
	{
		if(!found2[a[i]])
		{
			found2[a[i]] = 1;
			cout << a[i] << ' ';
			// sum++; 
		}
	}
}