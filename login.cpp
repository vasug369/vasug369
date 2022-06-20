#include<iostream>
#include<fstream>
using namespace std;
class page{
	int i,password;
	string name;
	public:
		void login(){
			cout<<"enter your name";
			cin>>name;
			cout<<"enter your password:";
			cin>>password;
			ifstream myfile("login.txt");
			
			
		}
		void signup(){
			cout<<"enter your name:";
			cin>>name;
			cout<<"enter your password:";
			cin>>password;
			ofstream myfile("signup.dat");
			myfile<<name<<" ";
			myfile<<password;
			myfile.close();
		}
		void showfiledata(){
			ifstream myfile("signup.dat");
			string data;
			int password;
			myfile>>data;
			myfile>>password;
			cout<<data;
			cout<<password;
		}
};

int main(){
	while(1){
	
	int ch;
	cout<<"\n\t\t\t\t\t\tWELCOME TO HOME PAGE"<<endl;
	cout<<"1.login\n2.register\n3.file data\n4.exit\n\n";
	cout<<"enter your choice:";
	cin>>ch;
	page p1;
	if(ch==1){
		p1.login();
	}
	else if(ch==2){
		p1.signup();
	}
	else if(ch==3){
		p1.showfiledata();
	}
	else if(ch==4){
		break;
	}
	else{
		cout<<"you entered invalid input";
	}
}
}
