#include<stdio.h>
struct book{
	char title[30];
	char author[40];
	char subject[40];
	int bookid;
};
int main(){
	int i;
	struct book bk[2];
	for(i=0;i<2;i++){
		printf("\n\nenter the title of the book:");
		gets(bk[i].title);
//		printf("\nenter the author of the book:");
//		gets(bk[i].author);
//		printf("\nenter the subject of the book:");
//		gets(bk[i].subject);
//		printf("\nenter the id of the book:");
//		gets(bk[i].bookid);
	}
	printf("here the title of your book is %s",bk[0].title);
	
}
