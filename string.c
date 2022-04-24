#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char name[30];
	char new[5]={'v','a','s','u','\0'};
	
	gets(name);
	puts(name);
	
	printf("length of the given string is %d",strlen(name));
	int n=strlen(name);
	for( i=0;i<n;i++){
	
	printf("%c",name[i]);
}
	printf("this is the new string -->%s",new);
}
