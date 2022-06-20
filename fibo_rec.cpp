#include<stdio.h>
int fibo(int n){
	int sum;
	if(n==0){
		return 0;
	}
	else if(n==1)
	
	{
		return 1;
	}
	else{
		sum=fibo(n-1)+fibo(n-2);
		return sum;
	}

	
}

int main(){
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	
		printf("%d ",fibo(i));
}
}
