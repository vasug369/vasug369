#include<iostream>
using namespace std;

struct emp{
	char name[50];
	int empid;
		
};

int main(){
	int n,i;
	cout<<"enter the number of employee in company";
	cin>>n;
	struct emp e1,e2;

	for(i=0;i<n;i++){
	
		cout<<"enter the name of the employee:";
		cin>>e1[i].name;
	
		cout<<"enter the id of the employee";
		cin>>e1.empid;
	}
	for(i=0;i<=n;i++){
		cout<<e1.name<<" is the name of the employee"<<endl;
		
		cout<<e1.empid<<" is the id of the employee";
	}
//	cout<<e1.name<<" is the name of the employee";
	
}
