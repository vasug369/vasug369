#include<stdio.h>
struct student{
		int maths_marks;
		int physics_marks;	
	};
int main(){
	
	struct student student[100];
//	student[0].maths_marks=10;
	printf("%d\n",student[0].maths_marks);
	printf("%d",student[0].physics_marks);	
}

