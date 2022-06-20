#include<iostream>
//shallow copy
using namespace std;
class dummy{
	private:
		int a,b;
	public:
		void setdata(int x,int y){
			a=x; b=y;}
		void showdata(){
			cout<<"a="<<a<<" b="<<b;
		}
			
};

int main(){
	dummy d1;
	d1.setdata(2,3);
	dummy d2=d1;
	d2.showdata();
	
}
