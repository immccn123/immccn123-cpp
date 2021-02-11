#include <iostream>
#include <algorithm>
using namespace std;
struct T
{
    int locate,num;
} list[100005];
int n,sy[100005];
int cmp(T x,T y)
{
    return x.num < y.num;
}
int main()
{
    int i,j,l=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>list[i].num;
        list[i].locate=i;
    }
    sort(list+1,list+n+1,cmp);
    for(i=1; i<=n; i++)
    {
        sy[list[i].locate]=i;
    }
    for(i=1; i<=n; i++)
    {
        if(i!=list[i].locate)
        {
            l++;
            sy[list[i].locate]=sy[i];
            swap(list[i].locate,list[sy[i]].locate);
        }
    }
    cout<<l;
    return 0;
}
