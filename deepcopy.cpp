#include<iostream>
//shallow copy
using namespace std;
class dummy{
	private:
		int a,b;
		int *p;
	public:
		dummy(){
		
			p=new int;
		}
		void setdata(int x,int y,int z){
			a=x; b=y; *p=z;}
		void showdata(){
			cout<<"a="<<a<<" b="<<b<<" c="<<p;
			cout<<"value of c is"<<*p;
		}
		dummy(dummy &d){        //make own copy constructor to avoid deepcopy danger
			a=d.a; b=d.b;
			p=new int;
			*p=*d.p;
		}
			
};

int main(){
	dummy d1;
	d1.setdata(2,3,4);
	dummy d2=d1;
	d2.showdata();
	
	d1.setdata(2,3,NULL);
	d1.showdata();
	d2.showdata();
}
