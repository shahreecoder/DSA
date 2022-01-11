/*
-------------------------------------
stack implementation Linked List in C++ 
using OOP (Classes) 

*/


#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(){
			data=0;
			next=NULL;
		}
};
class stack{
	public:
	node *head;
	stack(){
		head=NULL;
	}
	void push(int val ){
		node *newnode=new node();
		newnode->data=val;
		if(head==NULL){
			head=newnode;
			cout<<"DATA is PUSH"<<endl;
		}else{
			newnode->next=head;
			head=newnode;
			cout<<"DATA is Push"<<endl;
		}
	}
	void pop(){
		node *dlt=NULL;
		if(head==NULL){
			cout<<"STACK IS EMPTY"<<endl;
		}else{
			dlt=head;
			cout<<"DATA IS POP"<<" "<<dlt->data<<endl;
			head=dlt->next;
			delete dlt;
		}
	}
	void top(){
		if(head==NULL){
				cout<<"STACK IS EMPTY"<<endl;
		}else{
			cout<<"Top DATA is"<<head->data<<endl;
		}
	}
	
};
int main(){
	stack s;
	s.push(44);
	s.push(33);
	s.push(55);
	s.push(100);
	s.pop();
	s.pop();
	s.top();
	s.pop();
	s.pop();

}
