#include<stdio.h>
int fact;
int factorial(int num){
	if(num==1)
		return 1;
	
	else
		fact=num*factorial(num-1);
	
	return fact;
}
int main(){
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("factorial of %d is %d",num,factorial(num));
}
