#include<iostream>
using namespace std;
int main(){
	int arr1[5]={1,2,1,3,4};
	int arr2[5]={1,2,2,3,4};
	int common[10],k=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr1[i]==arr[j]){
				common[k]=arr1[i];
				k++;
			
			}
		}
	}
	for(int m=0;m<10;m++){
		if(m!=0){
			cout<<common[m];
		else{
			break;
		}
		}
	}
}
