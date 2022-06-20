#include<iostream>
using namespace std;

class railway{
	private:
		string tname;
		int pnr;
		int seat_avlb;
		
	public:
		static int total_seats;
	
//setter
		string set_tname(string tname){
			this->tname=tname;		
		}

		int set_pnr(int x){
			this->pnr=x;		
		}
		int set_seatavlb(int x){
			this->seat_avlb=x;		
		}
//getter		
		void show_tname(){
			cout<<tname;		
		}
		void show_pnr(){
			cout<<"pnr of train is "<<pnr;		
		}

		void show_seatavlb(){
			cout<<"seat available "<<seat_avlb;		
		}
		void show_totalseats(){
			cout<<"total seats in this train is "<<total_seats;		
		}

};
class other{
	friend class railway;
	int show_data(){
	
	
	cout<<tname;
}
};

int railway::total_seats=100;

int main(){
	railway p1,p2;
	p1.set_tname("unahimachel");
//	cout<<p1.show_tname();
//	p1.show_totalseats();
	other t1;
	t1.show_data;


}
