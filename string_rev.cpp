#include<iostream>
using namespace std;
int main(){
	int i,k;
	string str,newstr;
	getline(cin,str);
	for(i=0;i<str.size();i++){
		if(str[i]==" "){
			for(k=0;k<i;k++){
				newstr=newstr+str[k];
				
			}
			
		}
		newstr=newstr+str[i];
		
	}
}
