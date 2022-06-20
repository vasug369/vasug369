<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int d,a,b,c;
    printf("Enter the value of a :-");
    scanf("%d",&a);
    printf("Enter the value of b :-");
    cin>>b;   
    printf("Enter the value of c :-");
    scanf("%d",&c); 
    d=b*b-4*a*c;
    cout<<"Hello World"<< a-b;
    printf("\nThe addition of two numbers are %d \n",a+b);
    cout<<"The discriminant of two numbers are" << d<<endl;
    cout<<(d==0?"Real Roots":"Imaginary Roots");
    return 0;
}
=======
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<conio.h>
using namespace std;


int main() {
    int N;
    int arr[N];
    cin>>N;
    for(int i=0;i<=N;i++){
        cin>>arr[i];    
    }
    for(int i=N+1;i>-1;i--){
        cout<< arr[i]<<" ";
    }
    
	getch();
    
	return 0;
}

>>>>>>> 0c9a07d (this is my long time after commit)
