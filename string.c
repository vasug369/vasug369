#include<stdio.h>
<<<<<<< HEAD
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
=======
#include<windows.h>
int main(){
//	char name[30];
//	gets(name);
//	printf(name);
	HWND hWnd = CreateWindow("", "My first GUI window", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 200, 200, NULL, NULL, NULL, NULL);
>>>>>>> 0c9a07d (this is my long time after commit)
}
