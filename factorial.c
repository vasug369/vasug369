#include<stdio.h>
int main(){
	int num,fact=1;
	
	printf("enter the number:");
	scanf("%d",&num);
	int temp=num;
	while(num>0){
		fact=fact*num;
		num=num-1;
	}
	printf("the factorial of %d is %d",temp,fact);
}
