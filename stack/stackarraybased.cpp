/*
-------------------------------------
stack implementation Array Based in C++ 
using OOP (Classes) 

*/



#include<iostream>
using namespace std;
class stack{
	private:
		int top;
		int arr[5];
	public:
		stack(){
			top=-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
		}
		
		bool isEmpty(){
			if(top==-1){
				return true;
			}else{
				return false;
			}
		}
		bool isFull(){
			if(top==4){
				return true;
			}else{
				return false;
			}
		}
		void push(int val){
			if(isFull()){
				cout<<"Stack is Overflow"<<endl;
			}else{
				top++;
				arr[top]=val;
			}
		}
		int pop(){
			if(isEmpty()){
				cout<<"Stack is underflow"<<endl;
				return 0;
			}else{
				int popval=arr[top];
				arr[top]=0;
				top--;
				return popval;
			}
		}
		int count(){
			return (top+1);
		}
		void change(int pos, int val){
			arr[pos]=val;
			cout<<"Value is update"<<endl;
		}
		void display(){
			cout<<"All valuse in stack are"<<endl;
			for(int i=4; i>=0; i--){
				cout<<arr[i]<<endl;
			}
		}
};
int main(){
	stack s;
	s.push(20);
	s.push(40);
	s.push(22);
	s.push(34);
	cout<<"Count is : "<<s.count();
	s.change(2,66);
	s.display();
}
