#include <iostream>
using namespace std;

int add(int a,int b){
	while(b!=0){
		int carry=a&b;
		a=a^b;
		b=carry<<1;
	}
	return a;
}
int main() {
int a ,b;
cout<<"Enter the first number:";
cin>>a;

cout<<"Enter the sec number:";
cin>>b;
cout<<"Addition of two numbers:"<<add(a,b);
	return 0;
}
