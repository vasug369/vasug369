#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"enter number of elements in array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the element:";
	for(i=0;i<n;i++){
		cin<<arr[i];
	}
	int k=1;
	for(j=0;j<n;j++){
		while(k<=n){
			if(arr[j]=0 && arr[k]!=0){
				arr[j]=arr[k];
				arr[k]=0;
				k++;
			}
		}
		
	}
	int l;
	for(l=0;l<n;l++){
	
	cout<<"final array is"<<arr[l];
}
}
