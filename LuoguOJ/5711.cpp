#include<iostream>
using namespace std;
int main(){
	int y, run;
	cin>>y;
	if (y % 100 == 0){
		if (y % 400 == 0){
			run = 1;
		}
		else{
			run = 0;
		}
	}
	else{
		if (y % 4 == 0){
			run = 1;
		}
		else{
			run = 0;
		}
	}
	cout<<run;
}
