#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
stack<char> s;
int main()
{
    char ch = '-';
    while(ch != '@')
    {
        ch = getchar();
        if(ch == '(') s.push('1');
        if(!s.empty()) if(ch == ')') s.pop();
    }
    if(!s.empty()) cout << "NO";
    else cout << "YES";
    return 0;
}