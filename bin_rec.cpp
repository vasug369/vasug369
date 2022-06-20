#include<iostream>
using namespace std;
int binary(int num){
	if(num==0){
		return 0;	
	}
	
	else{
		
		return(num%2+10*(binary(num/2)));
	}
}
int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	
	cout<<binary(num);
	
}
