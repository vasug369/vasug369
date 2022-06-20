#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		next=NULL;
	}
};
	void print(Node *head){
		Node *tmp=head;
		while(tmp!=NULL){
			cout<<tmp->data<<" ";
			tmp=tmp->next;
		}
	}
	
	
int main(){
	
	Node n1(10);
	Node *head=&n1;
	Node n2(20);
	n1.next=&n2;
	print(head);
	
	
}		
