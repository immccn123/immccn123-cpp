#include <iostream>
#include <cstdio>
using namespace std;
char f(char c)
{
	if(c == '\r' || c == '\n') return 25;
	else return (c - 64);
}
int main()
{
	char ch;
	bool flag = true;
	long long huixing = 1,team = 1;
	while ( (ch = cin.get() ) != '\n') huixing *= ch - 'A' + 1;
	while ( (ch = cin.get() ) != '\n') team *= ch - 'A' + 1;
	if(team % 47 == huixing % 47) cout << "GO";
	else cout << "STAY";
}
