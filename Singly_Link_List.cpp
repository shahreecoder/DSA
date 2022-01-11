#include<iostream>
using namespace std;
class date{
	private:
		int day;
		int month;
		int year;
	public:
		date(){
			day=0;
			month=0;
			year=0;
		}
		date(int d, int m, int y){
			day=d;
			month=m;
			year=y;
		}
		void setmonth(int m){
			month=m;
		}
		int getmonth(){
			return month;
		}
		void setday(int d){
			day=d;
		}
		int getday(){
			return day;
		}
		void setyear(int y){
			year=y;
		}
		int getyear(){
			return year;
		}
		void pirntdate(){
			cout<<day<<" - "<<month<<" - "<<year<<endl;
		}
};
//id name stdclass
class student{
	private:
		int id; 
		string name;
		string cls;
		date dob;
	public:
		void setid(int n){
			id=n;
		}
		int getid(){
			return id;
		}
		void setname(string n){
			name=n;
		}
		string getname(){
			return name;
		}
		void setcls(string n){
			cls=n;
		}
		string getcls(){
			return cls;
		}
		void setdob(int d, int m, int y){
			dob.setday(d);
			dob.setmonth(m);
			dob.setyear(y);
		}
	void printstd(){
		cout<<"------------------------"<<endl;
		cout<<"Name is"<<name<<endl;
		cout<<"ID is"<<id<<endl;
		cout<<"Clas is"<<cls<<endl;
	cout<<"Month of Birth Day is"<<dob.getmonth();
		cout<<"------------------------"<<endl;
	}
		
};


class node{
	public:
		student data;
		node *next;
		node(){
			data.setid(0);
			data.setname("a");
			data.setcls("b");
			next=NULL;
		}
};
class linklist{
	public:
		node *head;
		linklist(){
			head=NULL;
		}
	void insertFirst(int id, string name, string cls, int d, int m, int y){
		node *newnode=new node();
		newnode->data.setid(id);
		newnode->data.setname(name);
		newnode->data.setcls(cls);
		newnode->data.setdob(d,m,y);
		if(head==NULL){
			head=newnode;
			cout<<"Insert scuccessfull"<<endl;
		}else{
			newnode->next=head;
			head=newnode;
		}
		
	}	
	void insertLast(int id, string name, string cls){
		node *newnode=new node();
		newnode->data.setid(id);
		newnode->data.setname(name);
		newnode->data.setcls(cls);
		if(head==NULL){
			head=newnode;
			cout<<"Insert "<<endl;
		}else{
			node *temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
			cout<<"Insert"<<endl;
			
		}
	}
	
void search(int id){
		if(head!=NULL){
			node *temp=head;
			while(temp!=NULL){
				if(temp->data.getid()==id){
					temp->data.printstd();
					return;
				}
				temp=temp->next;
			}
			cout<<"Student is Not Found"<<endl;
		}else{
			cout<<"List is empty"<<endl;
		}
	}

	void update(int id,string name,string cls){
		if(head!=NULL){
			node *temp=head;
			while(temp!=NULL){
				if(temp->data.getid()==id){
					temp->data.setname(name);
					temp->data.setcls(cls);
					cout<<"data is Update"<<endl;
					return;
				}
				temp=temp->next;
			}
			cout<<"Student is not found"<<endl;
		}else{
			cout<<"List is empty"<<endl;
		}
	}
void dlt(int id){
		node *pre=NULL;
		if(head!=NULL){
			if(head->data.getid()==id){
				pre=head;
				head=head->next;
			}else{
				node *temp=head;
				while(temp->next!=NULL){
					if(temp->next->data.getid()==id){
						pre=temp->next;
						temp->next=pre->next;
						break;
					}
					temp=temp->next;
				}
			}
			delete pre;
			cout<<"delete successfully"<<endl;	
			
		}else{
			cout<<"List is empty"<<endl;
		}
	}	


	void display(){
		int count=0;
		if(head!=NULL){
			node * temp=head;
			while(temp!=NULL){
				temp->data.printstd();
				count++;
				temp=temp->next;	
		}
		cout<<"Total Number of Nodes is"<<count<<endl;
		}else{
			cout<<"List is empty"<<endl;
		}
	}
	
//	void insertatmidel(int data,int pos){
//		node * newnode=new node();
//		newnode->data=data;
//		if(head==NULL){
//			head=newnode;
//		}else{
//			node *temp=head;
//			int count=0;
//			while(temp!=NULL){
//				count++;
//				if(count==pos){
//					newnode->next=temp->next;
//					temp->next=newnode;
//				}
//			}
//		}
//	}
	
	
	
	
	
};
int main(){
 linklist obj;
 obj.insertFirst(1,"Shahroz","MS",5,11,1998);
 obj.insertFirst(2,"Sabahat","BSCS",12,01,2002);
 //obj.insertLast(3,"ABC","MCS");
 obj.display();
 int id;
 cout<<"Enter id"<<endl;
 cin>>id;
 obj.search(id);
 
// cout<<"Enter id that you want to update"<<endl;
// cin>>id;
// obj.update(id,"taiba","10th");
// obj.display();
 
 obj.dlt(2);
 obj.display();
 
}
