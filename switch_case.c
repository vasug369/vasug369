#include<stdio.h>
int main(){
	int n;
	printf("enter the day:");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("sunday");
			break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wednesday");
			break;
		case 5:
			printf("thursday");
			break;
		case 6:
			printf("friday");														
			break;
		case 7:
			printf("saturday");
			break;
		default:
			printf("ohh you have entered out of rangenumber");
	}
		
	}

