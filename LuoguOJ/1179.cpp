#include <iostream>
#include <sstream>
using namespace std;
string its(int n){
	ostringstream stream;
	stream << n;
	return stream.str();
}
int main(){
	int a, i,count = 0;
	char x;
	std::string n;
	cin >> i >> a;
	while(i <= a){
		n += its(i);
		i++;
	}
	i = 0;
	while(i < n.length()){
		if (n[i] == '2'){
			count++;
		}
		i++;
	}
	cout << count;
	return 0;
}
/*
P1179��		�ύ��¼
���		����	״̬	���Ե�

*/