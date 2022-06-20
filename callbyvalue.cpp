#include<stdio.h>
void swap(int x,int y){
	int temp=x;
	x=y;
	y=temp;
	
}
int main(){
	int x,y;
	printf("enter the first number:");
	scanf("%d",&x);
	
	printf("enter the second number:");
	scanf("%d",&y);
	
	swap(x,y);
	
	printf("values of x,y after swapping is  %d,%d",x,y);
}
