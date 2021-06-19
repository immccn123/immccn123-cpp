#include <iostream>
using namespace std;
int main()
{
    freopen("2.txt","w",stdout);
    int tmp;
    for(int i = 1;i < 5;i++)
    for(int j = 1;j < 5;j++)
    {
        cin >> tmp;
        if(tmp) cout << i << " " << j << " " << tmp << endl;
    }
    fclose(stdout);
    return 0;
}