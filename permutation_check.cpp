#include<iostream>
using namespace std;
int main(){
	int i,j;
	string str1="aab";
	string str2="aba";
	int count=0;
	for(i=0;i<str1.length();i++){
		for(j=0;j<str1.length();j++){
			if(str1[i]==str2[j]){
				count++;
				// str2[j]="";	
		}
	}
}
	if(count==str1.length()){
		printf("%s","true");
	}
	else{
		printf("%s","false");
	}
}