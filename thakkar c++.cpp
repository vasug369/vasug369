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