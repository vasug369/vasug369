#include<iostream>
using namespace std;
int main(){
	//selection sort
	int arr[]={2,1,5,3,766,5,45,3,43,4,3};
	int min,i,j;
	
	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		min=i;
		for(j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++){
			if(arr[j]<arr[min]){
				min=j;	
			}
		}
		if(arr[i]>arr[min]){
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
			
		}
		
		
	}
	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cout<<arr[i]<<", ";	
	}
	
}
