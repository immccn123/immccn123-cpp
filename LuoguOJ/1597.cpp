#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int a = 0,b = 0,c = 0,i=0,g;
	string x, y;
	getline(cin,x);
	for(;i < x.length();i++){
	switch(x[i]){
		case 'a':
			switch (x[i+3]){
				case '1':a=1;break;
                case '2':a=2;break;
                case '3':a=3;break;
                case '4':a=4;break;
                case '5':a=5;break;
                case '6':a=6;break;
                case '7':a=7;break;
                case '8':a=8;break;
                case '9':a=9;break;
                case '0':a=0;break;
                case 'b':a=b;break;
                case 'c':a=c;break;
			}
			break;
		case 'b':
			switch(x[i+3]){
	            case '1':b=1;break;
	            case '2':b=2;break;
	            case '3':b=3;break;
	            case '4':b=4;break;
	            case '5':b=5;break;
	            case '6':b=6;break;
	            case '7':b=7;break;
	            case '8':b=8;break;
	            case '9':b=9;break;
	            case '0':b=0;break;
	            case 'a':b=a;break;
	            case 'c':b=c;break;
			}
			break;
		case 'c':
			switch (x[i+3]){
				case '1':c=1;break;
	            case '2':c=2;break;
	            case '3':c=3;break;
	            case '4':c=4;break;
	            case '5':c=5;break;
	            case '6':c=6;break;
	            case '7':c=7;break;
	            case '8':c=8;break;
	            case '9':c=9;break;
	            case '0':c=0;break;
	        	case 'b':c=b;break;
	            case 'a':c=a;break;
			}
			break;
		}
	}
	printf("%d %d %d",a,b,c);
	return 0;
}