#include<iostream>

using namespace std;
class Employee{
	
private:
	string name;
	string company;
	int age;
	
public:
	void setName(string nam){	//setter 
		name=nam;
	}
	string getName(){		//getter
		return name;
	}
	void setCompany(string cmpy){
		company=cmpy;
	}
	string getCompany(){
		return company;
	}
	void setAge(int ag){
		age=ag;
	}
	int getAge(){
		return age;
	}
	
	
	//constructor
	Employee(string nme,string cmpany,int ag){
		name=nme;
		company=cmpany;
		age=ag;
	}
	//method
	void Introduce(){
		cout<<"name"<<name<<endl;
		cout<<"company"<<company<<endl;
		cout<<"age"<<age<<endl;
	
	}
};

int main()
{
	Employee emp1=Employee("vasu","abc",20);
//	emp1.name="vasu";
//	emp1.company="abc";	
//	emp1.age=20;
	emp1.Introduce();
	
	Employee emp2=Employee("abhay","xyz",19);
// 	emp2.name="abhay";
//	emp2.company="xyz";	
//	emp2.age=19;
	emp2.Introduce();
	
	emp1.setName("john doe");
	cout<<emp1.getName();
	
	
	
}
