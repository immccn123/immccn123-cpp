#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
using namespace std;
string its(int n){
	ostringstream stream;
	stream << n;
	return stream.str();
}
int main(){
	int i = 10000,k;
	bool ls = false;
	string suba,subb,subc,m;
	cin>>k;
	while(i <= 30000){
		m = its(i);
		suba = m[0];suba += m[1];suba += m[2];
		subb = m[1];subb += m[2];subb += m[3];
		subc = m[2];subc += m[3];subc += m[4];
		if (atoi(suba.c_str()) % k == 0 && atoi(subb.c_str()) % k == 0 && atoi(subc.c_str()) % k == 0){
			cout << i << endl;
			ls = true;
		}
		i++;
	}
	if (ls) return 0;
	cout<<"No"<<endl;
	return 0;
}
