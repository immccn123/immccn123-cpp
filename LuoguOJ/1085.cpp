#include <iostream>
using namespace std;
struct A{
    int school;
    int out;
} clas[8];
int main()
{
    clas[0].school = clas[0].out = 0;
    for(int i = 1;i <= 7;i++)
    {
        cin >> clas[i].school >> clas[i].out;
    }
    int max_day = 0;
    int tmp = 0;
    for(int i = 1;i <= 7;i++)
    {
        tmp = 0;
        tmp = clas[i].school + clas[i].out;
        if(tmp > 8) if(tmp > (clas[max_day].school + clas[max_day].out)) max_day = i;
    }
    cout << max_day;
    return 0;
}