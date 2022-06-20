#include<iostream>
using namespace std;
class test{
	int x;
	public:
		void setData(int x){
			this->x=x;	
		}
		int getData(){
			return this->x;
		}
		test(int x){
			this->x=x;
			}
		
};
int main(){
	test t1=test(6);
//	t1.setData(3);
	cout<<t1.getData();
	
	
}
