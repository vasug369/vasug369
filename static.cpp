//static member functions are helpful when there doesnt exist any object
//:: this is called scope resolution operator
#include<iostream>
using namespace std;
class amount{
	private:
		int balance;
		static float roi;//rate of interest
	public:
		static void setroi(float r){
			amount::roi=r;
			
		}
		void showroi(){
			cout<<"roi="<<roi;
		}
};
	
float amount::roi=2.4f;
int main(){
	amount a1;
	a1.setroi(5.3f);
	a1.showroi();
}
