#include<iostream>
using namespace std;
struct student{
	string name;
	int rollno;
	int phoneno;
} s;

int main(){
	s.name="vasu";
	s.phoneno=1234567890;
	cout<<s.phoneno;
}
