#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int front=0,last=0,ele,arr[6]={1,2,3,4,5,6};
	cout<<"enter the element:";
	cin>>ele;
	int n=sizeof(arr)/sizeof(arr[0]);
//	cout<<n;
	int mid=floor((arr[0]+arr[n-1])/2);
	cout<<mid;
	while(mid!=ele){
		if(mid>ele){
			last=mid-1;
		}
		else if(mid<ele){
			front=mid+1;
		}
		mid=(front+last)/2;
		
		}
//		else{
//			mid=-1;
//		}
	cout<<mid;
}
	
	
