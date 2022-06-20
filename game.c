#include<stdio.h>
int random();
int main(){
	int chances=10;
	while(chances>0){
		int ch;
		printf("\n1.stone\n2.paper\n3.scissor\n4.exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		int a=random();
		if(ch==1){   //stone
			if(a==2){
				printf("\nyou lose!!\a\n");
				printf("\ncomputer choice is paper!!!\a\n");
			}
			else if(a==1){
				printf("\nTie\n");
				printf("\ncomputer choice is stone!!!\a\n");
			}
			else{
				printf("\nyou win !!\a\n");
				printf("\ncomputer choice is scissor!!!\a\n");
			}
		}
		else if(ch==2){
			if(a==3){
				printf("\nyou lose !!\a\n");
				printf("\ncomputer choice is scissor!!!\a\n");

			}
			else if(a==2){
				printf("\ntie\n");
				printf("\ncomputer choice is paper!!!\a\n");
			}
			else{
				printf("\nyou win!\n");
				printf("\ncomputer choice is stone!!!\a\n");
			}
		}


		else if(ch==3){
			if(a==1){
				printf("\nyou win !!\a\n");
				printf("\ncomputer choice is stone!!!\a\n");

			}
			else if(a==3){
				printf("\ntie\n");
				printf("\ncomputer choice is scissor!!!\a\n");

			}
			else{
				printf("\nyou lose!\n");
				printf("\ncomputer choice is paper!!!\a\n");
			}
		}

		else if(ch==4){
			break;
		//	system("exit");

	}
		else{
			printf("wrong input");
		}
}
}
int random(){
	while(1){
	int ran;
	ran=rand()%4;
	if(ran==0){
		continue;
	}
	else{

	return(ran);
}
//	printf(ran);
//	getch();
}
}
