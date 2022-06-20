#include<stdio.h>

//user-defined function

int matrix_subtraction(int row,int column){
	int matrix1[row][column],matrix2[row][column],matrix3[row][column];	
	int i,j;
	printf("enter the elements of matrix 1:");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&matrix1[i][j]);
		}	
	}
	
	printf("enter the elements of matrix 2:");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&matrix2[i][j]);
		}	
	}
	

		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				int temp;
				temp=matrix1[i][j]-matrix2[i][j];
				matrix3[i][j]=temp;
		}	
	}

	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d",matrix3[i][j]);
		}
	}
	
}

//main function
int main(){
	int i,j,row,column;
	printf("enter the number of rows:");
	scanf("%d",&row);

	printf("enter the number of columns:");
	scanf("%d",&column);
	
	matrix_subtraction(row,column);
	
	
}
	

