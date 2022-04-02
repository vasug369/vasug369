#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	int flag=0,bell;
	cin>>n;
	if(n>=1 && n<=pow(10,7)){
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
		if(arr[j+1]>arr[j]){                           //for strictly increasing
//			cout<<"\n"<<arr[j];
			
			continue;
			break;
//			cout<<arr[j+1];
		}
		else if(arr[j+1]<arr[j]){
//			cout<<"\n"<<arr[j];
			continue;
			break;
		}
		else if(arr[j+1]==arr[j]){
			flag=0;
			break;
		}
		bell=j;
		
	}
	for(int m=0;m<sizeof(arr)/sizeof(arr[0]);m++){
		if(arr[m+1]>arr[m]){                           //for strictly increasing
//			cout<<arr[j];
//			cout<<"\n"<<arr[m+1];
			
			continue;
		}
		else if(arr[m+1]<arr[m]){					//for strictly decreasing
			
//			cout<<"\n"<<arr[m+1];
			continue;
		
		}
		else if(arr[m+1]==arr[m]){
//			cout<<"here value are equal";
			
			flag=0;
			break;
		}
		
		
		else{
			flag=0;
		}
		bell=m;
	}

//	cout<<"flag value is"<<flag;
	cout<<"bell value is"<<bell;
	
	if(flag==0){
//		cout<<boolalpha<<false;
	}
	else if ((bell+1)==n){
	
//		cout<<boolalpha<<true;
	}
}
}

//pending condition fxor truue .................

