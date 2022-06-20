#include<iostream>
using namespace std;
void array(int *arr,int size){
	int i;
//	cout<<*arr;
	for(i=0;i<size;i++){
		cout<<arr[i];
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	array(arr,5);
	
}
