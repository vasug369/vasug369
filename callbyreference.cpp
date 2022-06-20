#include<stdio.h>
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	
}
int main(){
	int x,y,*ptr1,*ptr2;
	printf("enter the first number:");
	scanf("%d",&x);
	
	printf("enter the second number:");
	scanf("%d",&y);
	
	ptr1=&x;
	ptr2=&y;
	
	swap(ptr1,ptr2);
	
	printf("values of x,y after swapping is  %d,%d",x,y);
}
