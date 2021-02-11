#include <iostream>
#include <sstream>
using namespace std;
string its(int n)
{
	ostringstream stream;
	stream << n;
	return stream.str();
}
int main(){
	int a, i = 1,count = 0;
	char x;
	std::string n;
	cin >> a >> x;
	while(i <= a){
		n += its(i);
		i++;
	}
	i = 0;
	while(i < n.length()){
		if (n[i] == x){
			count++;
		}
		i++;
	}
	cout << count;
	return 0;
}
