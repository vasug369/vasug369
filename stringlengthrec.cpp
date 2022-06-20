#include<iostream>
using namespace std;
int length(char s[]){		//{'v','a','s','u','\0'}
	cout<<s;
	if(s[0]=='\0'){
		return 0;
	}
	cout<<"           "<<int s;
	int smallstringlength=length(s+1); 	// {a','s','u','\0'}
	
	return 1+smallstringlength;
	}
int main(){
	char str[100];
	cin>>str;
	
	int l=length(str);
	cout<<l<<endl;
	
}
