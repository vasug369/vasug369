#include<iostream>
using namespace std;
int main(){
	//insertion sort
	int arr[5]={20,100,43,32,55};
	int i,ele,j=2,temp,final;
	int size=sizeof(arr)/sizeof(arr[0]);
	for(i=2;i<size;i++){
		ele=arr[i];
		for(j=0;j<i;j++){
			if(ele<arr[j]){
				temp=arr[j];
				arr[j]=ele;
				ele=temp;
				
			} 
		}
	}
	for(final=0;final<sizeof(arr)/sizeof(arr[0]);final++){
	
		cout<<arr[final]<<" ";
}
}
