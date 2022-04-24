#include<iostream>
using namespace std;
int main(){
	int n,i,j,l;
	cout<<"enter number of elements in array:"<<endl;
	cin>>n;
	int arr[n],arr1[n];
	cout<<"enter the element:";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int k=0;
	for(j=0;j<n;j++){
		++k;
		if(k<=(n-1)){
		
			if(arr[j]==0 && arr[k]!=0){
				arr[j]=arr[k];
				arr[k]=0;
			
			}
		}
	}
		
	
	cout<<"final array is";
	for(l=0;l<n;l++){
	
	cout<<arr[l];
}
	return 0;
}
