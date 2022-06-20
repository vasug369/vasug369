#include<stdio.h>
int main(){
	int *ptra;
	int *ptrb;
	int a,b;
	printf("enter a integer:");
	scanf("%d",&a);
	printf("enter a integer:");
	scanf("%d",&b);
	ptra=&a;
	ptrb=&b;
//	printf("the address of a is %d\n",ptra);
//	printf("the address of b is %d",ptrb);
//	printf("the value of a and b is %d ,%d",*ptra,*ptrb);
//	
	a=*ptrb;
	printf("the value of a now is %d",a);
	
	b=*ptra;
	printf("the value of b now is %d",b);
//	b=*ptra;
	printf("the vakue of a and b after swapping is %d %d",a,b);
}
