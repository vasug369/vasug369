#include<iostream>
#include<string.h>
using namespace std;

class car{
	private:
		string brand;
		string model;
		int average;
	public:
		void setBrand(string b){
			//setter 
			strcpy(brand,b);
			
		}
//		void model(string m){
//			//setter 
//			strcpy(this->model,m);
//			
//		}
//		void setaverage(int a){
//			//setter 
//			strcpy(this->average,a);
//			
//		}
		
//		car(string bran,string modl,int averag){
//			brand=bran;
//			model=modl;
//			average=averag;
//			
//		}
};
int main(){
	car c1;//=car("lamborghini","AVTR",7.69);
	c1.setBrand("lamborghini");
}
