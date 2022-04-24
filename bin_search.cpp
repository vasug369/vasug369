#include<iostream>
using namespace std;
int main(){
	int mid,n,i,search,j,start=0;
	cout<<"enter the number of elements in array:";
	cin>>n;
	int arr[n],end=n-1;
	
	cout<<"enter the element";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nenter the element you want to search in array:";
	cin>>search;
	int flag=0;
	
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]>search){
			end=mid-1;
			
		}
		else if(arr[mid]<search){
			start=mid+1;
			
		}
		else if(arr[mid]==search){
			flag=1;
			cout<<"element found at index "<<mid+1;
			break;
		}
	}
	if(flag==0){
		cout<<"element doesnot found";
	}
}
