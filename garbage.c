#include<stdio.h>
#include<string.h>
#define pi 3.14

int main(){
	int x;
	static int y;
	printf(" xis %d",x);
	printf("y is %d",y);
	register int n=3;
	printf("%d",n);
	printf("%f",pi);
	return 0;
}
