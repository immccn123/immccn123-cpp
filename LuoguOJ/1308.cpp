
// +-32 -> ด๓ะกะด
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("1.txt","r",stdin);
    string f, str;
    int tmpp = 0;
    int locate = 0, sum = 0, tmp;
    string STATUS = "NO";
    int ind = 0;
    cin >> f;
    getline(cin, str);
    for(int i = 0;i < f.length();i++) if(f[i] >= 'A' && f[i] <= 'Z') f[i] -= 32;
    for(int i = 0;i < str.length();i++) if(str[i] >= 'A' && str[i] <= 'Z') str[i] -= 32;
    while(true)
    {
        locate = str.find(f,tmpp);
        if(STATUS == "NO")
            if(locate == string::npos)
            {
                STATUS = "FAILED";
                break;
            }
        else if(locate == string::npos) break;
        if((str[locate - 1] != ' ' && str[locate + f.length()] != ' '))
        {
            sum++;
            tmpp = locate;
            if(STATUS == "NO")
            {
                ind = locate;
                STATUS = "FOUND";
            }
        }
        else continue;
        // if(STATUS == "NO");
    }
    if(STATUS == "FAILED")
    {
        cout << -1;
        fclose(stdin);
        return 0;
    }
    cout << sum << ' ' << ind;
    fclose(stdin);
    return 0;
}
