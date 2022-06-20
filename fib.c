#include<stdio.h>
int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1)
	
	{
		return 1;
	}

	int fibnm1=fib(n-1);
	int fibnm2=fib(n-2);
	int fibn=fib(n-2)+fib(n-1);
	return fibn;
}
	int main()
	{
		printf("fib of 5 is",fib(5));
	}


 
