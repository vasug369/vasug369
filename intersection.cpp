#include<iostream>

using namespace std;

int main(){
	int n,m,k=0,index;
	
	cout<<"enter the number of elements in array 1:";
	cin>>n;

	cout<<"enter the number of elements in array 2:";
	cin>>m;
	
	
	(n>m)?index=n:index=m;
	
	int arr1[n],arr2[m],common[5];
	
	for(int i=0;i<n;i++){
		cout<<"enter the element"<<" "<<i+1;
		cin>>arr1[i];
	}
	
	for(int j=0;j<n;j++){
		cout<<"enter the element"<<" "<<j+1;
		cin>>arr1[j];
		
	}
	int redundant=0;
	for(int h=0;h<n;h++){
		for(int y=0;y<m;y++){
			for(int t=0;t<5;t++){
			
				if(arr1[h]!=common[t]){
					redundant++;
				}
				
			if(redundant==n){
			
					if (arr1[h]==arr2[y]){
					
						common[k]=arr1[n];
						k++;
					}
					
					
					}
			else{
				
				h++;
				}
			
			}
		}
	}
	
	
		cout<<common[0]<<" ";
		cout<<common[1]<<" ";
		cout<<common[2]<<" ";
		cout<<common[3]<<" ";
		cout<<common[4];

}
