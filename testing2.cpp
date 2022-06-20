#include<iostream>
using namespace std;

int stat(){
	static int count=0;
	count++;
	return(count);
}
int main()
{
	
	cout<<"you called the function stat"<<stat()<<"times";
	cout<<"you called the function stat"<<stat()<<"times";
	cout<<"you called the function stat"<<stat()<<"times";
	
		
//	println("hello world");	
// int x = 9;
// while (x>0){
// 
// x--;
// cout<<x;
//}
return 0;

}
