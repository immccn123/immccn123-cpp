#include <bits/stdc++.h>
using namespace std;
int n;
struct T
{
    int locate;
    long long num;
};
// void swap(T list,T b)
// {
//     T tmp;
//     tmp = list;
//     list = b;
//     b = tmp;
// }
// void s(T arr[], int len) {
//     int i, j;
//     for (i = 0; i < len - 1; i++)
//         for (j = 0; j < len - 1 - i; j++)
//             if (arr[j].num < arr[j + 1].num)
//                 swap(arr[j], arr[j + 1]);
// }
int find(long long list, T arr[])
{
    for(int i = 0;i < n;i++)
    {
        if(arr[i].num == list)
        {
            return arr[i].locate;
        }
    }
    return -1;
}
int cmp(T x,T y)
{
    return x.num < y.num;
}
int main()
{

    cin >> n;
    T list[n];
    int suoyin[n];
    long long count = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> list[i].num;
        list[i].locate = i;
    }
    sort(list + 1,list + n + 1,cmp);
    // for(int i = 0;i < n;i++)
    // {
    //     if(list[i].locate == i) continue;
    //     count++;
    //     swap(list[find(list[i].num,list)],list[i]);
    // }
    for(int i=0; i<n; i++)
    {
        suoyin[list[i].locate]=i;
    }
    for(int i=0; i<n; i++)
    {
        if(i!=list[i].locate)
        {
            count++;
            suoyin[list[i].locate]=suoyin[i];
            swap(list[i].locate,list[suoyin[i]].locate);
        }
    }
    cout << count;
}