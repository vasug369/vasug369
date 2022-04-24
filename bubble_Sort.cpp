#include<iostream>
using namespace std;
int main(){
	int arr[5]={20,100,43,32,55};
	int k,j,m,final;
	int temp;
	for(k=0;k<sizeof(arr)/sizeof(arr[0]);k++){
		for(m=0;m<(sizeof(arr)/sizeof(arr[0])-k-1);m++){
			if(arr[m]>arr[m+1]){
				temp=arr[m+1];
				arr[m+1]=arr[m];
				arr[m]=temp;
	}
}
}
	for(final=0;final<sizeof(arr)/sizeof(arr[0]);final++){
	
		cout<<arr[final]<<" ";
}
}
