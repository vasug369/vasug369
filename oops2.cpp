#include<iostream>
using namespace std;

class student{
private:
	string name,fname;
	int rollno,mobile;

public:
	
	void setname(string name){
		this->name=name;
	}
	void setfname(string fname){
		this->fname=fname;
	}
	void setroll(int rollno){
		this->rollno=rollno;
	}
	void setmobile(int mobile){
		this->mobile=mobile;
	}

	void displayname(){
		cout<<name;
	}
	void displayfname(){
		cout<<fname;
	}
	void displayroll(){
		cout<<name;
	}
	void displaymobile(){
		cout<<name;
	}
}; 

int main(){
	static string school="Maples Academy";
	student s1,s2,s3;
	s1.setname("abhay");
}