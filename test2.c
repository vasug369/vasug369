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
	while(head!=NULL){
		node *tmp=head;
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
}

int main(){
	node n1(10);
	node *head=&n1;
	node n2(20);
	n1.next=&n2;
		
}
