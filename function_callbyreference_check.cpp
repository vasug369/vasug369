#include<iostream>
using namespace std;
void print(int &a){
	cout<<"here its is"<<a;
	a=100;
	
}

int main(){
	int a=200;
	cout<<a;
	print(a);
	cout<<a;
	
}
