#include<iostream>
using namespace std;

class railway{
	private:
		char tname[50];
		int pnr;
		int seat_avlb;
	public:
		static int total_seats;

//setter
		string set_tname(string x){
			this->tname=x;		
		}

		int set_pnr(int x){
			this->pnr=x;		
		}
		int set_seatavlb(int x){
			this->seat_avlb=x;		
		}
//getter		
		void show_tname(){
			cot<<"train name is "<<tname;		
		}
		void show_pnr(){
			cot<<"pnr of train is "<<pnr;		
		}

		void show_seatavlb(){
			cot<<"seat available "<<seat_avlb;		
		}
		void show_totalseats(){
			cot<<"total seats in this train is "<<total_seats;		
		}

};

int railway::total_seats=100;

int main(){
	railway p1,p2;
	p1.set_tname("unahimachel");
	p1.show_tname();

	return 0;
}