#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	int max=a;
	cout<<"Enter the three numbers:";
	cin>>a>>b>>c;
	if(a>b && a>c){
		max=a;
	}
	else if(b>c){
		max=b;
	}
	else{
		max=c;
	}
	cout<<"greatest of"<<a<<" "<<b<<" "<<c<<"is "<<max;
}
