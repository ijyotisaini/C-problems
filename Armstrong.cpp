#include <iostream>
using namespace std;

int main(){
	
 int num,rem;
 int sum=0;
 cout<<"Enter the three digit number:";
 cin>>num;
 int value=num;
 
 while(num!=0){
 	rem= num%10;
 	sum=sum+(rem*rem*rem);
 	num=num/10;
 }
 
 if(sum==value){
 	cout<<"Number is Armstrong.";
 }else{
 	cout<<"Not a Armstrong number.";
 }
	return 0;
}
