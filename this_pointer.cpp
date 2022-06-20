//this pointer use to remove name conflict 
#include<iostream>
using namespace std;
class box{
	int l,b,h;
	public:
		void setDimension(int l,int b,int h){
			this->l=l;
			this->b=b;
			this->h=h;
		}
		void showDimension(){
			cout<<"l="<<l<<" b="<<b<<" h="<<h;
		}
};
int main(){
	box b1;
	b1.setDimension(2,3,4);
	b1.showDimension();
}
