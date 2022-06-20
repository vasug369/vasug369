#include<iostream>
using namespace std;
int main(){
	char str[]="aaabbcccdsa";
	int len=sizeof(str);
	int count=1;
	int i;
	char strnew[100];
	int freq[100];
	int k=0;
	
	for(i=0;i<len;i++){
		char temp=str[i];
//		try{
		
		if(str[i]==str[i+1]){
			count++;
		}
		else{
			strnew[k]=temp;
			freq[k]=count;
			k++;
			
			count=0;
			if(str[i+1]==str[i+2]){
				count++;
			}
//		}
	}
//	catch(int){
//		cout<<"index ended";
//	}
}
	int size=sizeof(strnew)/sizeof(strnew[0]);
	for(i=0;i<6;i++){
		cout<<strnew[i];
		cout<<freq[i]<<endl;
	}
}
