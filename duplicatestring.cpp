#include<iostream>
using namespace std;

struct dict{
	char ch;
	int freq;
} d;

int main(){
	string str1,str2;
	str1="hello";
	int k=0,i=k+1;
	char ch=str1[k];
	d.ch=ch;
	d.freq=0;
	while (k!=5){
		for(i;i<5;i++){
			if(ch==str1[i]){
				d.ch=ch;
				d.freq=d.freq+1;
			}
			
		}
		k=k+1;
		ch=str1[k];
		
	
	}
	cout<<d.ch<<"has"<<d.freq;
	
}
