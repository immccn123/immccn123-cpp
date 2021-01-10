#include <iostream>
using namespace std;
int run(int y){
	int run;
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
	return run;
}
int main(){
	int yr, mt, dy;
	cin >> yr >> mt;
	switch(mt){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: dy = 31;break;
		case 4:
		case 6:
		case 9:
		case 11: dy = 30;break;
		default:
			if (run(yr) == 1) dy = 29;
			else dy = 28;
		}
		cout << dy;
		return 0;
}

