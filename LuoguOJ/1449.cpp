#include <bits/stdc++.h>
using namespace std;
stack<string> st;
int to_int(string s)
{
    istringstream is(s);
    int i;   
    is >> i;
    return i;
}
int main()
{
    int a, b;
    string tmp = "";
    char ch = '\0';
    while(ch != '@')
    {
        ch = getchar();
        if(ch == '+') 
        {
            a = to_int(st.top());st.pop();
            b = to_int(st.top());st.pop();
            st.push(to_string(a+b));
            continue;
        }
        if(ch == '*') 
        {
            a = to_int(st.top());st.pop();
            b = to_int(st.top());st.pop();
            st.push(to_string(a*b));
            continue;
        }
        if(ch == '/') 
        {
            a = to_int(st.top());st.pop();
            b = to_int(st.top());st.pop();
            st.push(to_string(a/b));
            continue;
        }
        if(ch == '-') 
        {
            a = to_int(st.top());st.pop();
            b = to_int(st.top());st.pop();
            st.push(to_string(a-b));
            continue;
        }
        if(ch == '.')
        {
            st.push(tmp);
            tmp = "";
            continue;
        }
        

    }
    cout << st.top();
}