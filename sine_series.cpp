#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
	int fact=1;
	while(n>1){
		fact=fact*n;
		n=n-1;
	}
	return fact;
		
}

int main(){
	int sign=1,i,n,x,sum=0,term,fact;
	//sine series
	cout<<"enter how many terms you want in sine series:";
	cin>>n;
	
	for(i=1;i<n/2;i=i+2){
		fact=factorial(i);
		term=pow(x,i)/fact;
		sum=sum+sign*term;
		sign=sign*(-1);
		
	}
	cout<<sum;
}
