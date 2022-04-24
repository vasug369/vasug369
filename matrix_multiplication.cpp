#include<iostream>
using namespace std;
int main(){
	char a[3],b[3],i,j,sum=0;
	cout<<"enter the order of first matrix:";
	cin>>a;
	int r1=a[0],c1=a[2];
	int m1[r1][c1];
	
	for(i=0;i<r1;i++){				//inputing the matrix
			for(j=0;j<c1;i++){
				cin>>m1[i][j];
				
			}

		}

	cout<<"enter the order of second matrix:";
	cin>>b;
	int r2=b[0],c2=b[2];
	int m2[r2][c2];

	for(i=0;i<r2;i++){				//inputing the matrix
			for(j=0;j<c2;i++){
				cin>>m2[i][j];
				
			}

		}

	if(r2==c1){
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				sum=sum+a[i][j]*
			}

		}

	}

}