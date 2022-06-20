#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		//constructor
		node(int data){
			this->data=data;
			next=NULL;	
		}
		
		
		
};
void print(node *head){
	node *tmp=head;
	while(tmp!=NULL){
		
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
}

int main(){
	//statically
	node n1(10);
	node *head=&n1;
	node n2(20);
	n1.next=&n2;
	print(head);
	//dyanamically
	node *n1=new int(10);
	cout<<n1.data;
		
}
