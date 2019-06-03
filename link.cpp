#include<iostream>
using namespace std;

class node{
public:
	int val;
	node *next;
	node(int newval){
	val=newval;
	next= NULL;}
};

class linkedlist {
public:
node *head;
linkedlist(){head=NULL;}

void insert(int newval)
	
	{node*t=new node(newval);
	t->val=newval;
	t->next=head;
        head=t;
}

node* gettail(){
	node*curr=head;
	while(curr!=NULL)
	{
	curr=curr->next;}

return curr;}

void display(){
	node*current=head;
	while(current!=NULL)
	{cout<<current->val<<"->";
	 current=current->next;
	}
	cout<<"NULL"<<endl;
}
void delet(){
	node*temp=head;
	head=head->next;
	delete temp;
}

int count(){int count=0;
	node*curr=head;
	while(curr!=NULL)
	{count++;
	curr=curr->next;
}
return count;
}

void insertat(int val,int pos)
	{node*curr=head,*temp;           
	if((pos>=1)&&(pos<=count()+1))
	{
		if(pos==1)
		{insert(val);
		}
		else{
		int c=1;
			while(c!=pos-1)
			{curr=curr->next;
			c++;
			}
		temp->next=curr->next;
                curr->next=temp;}

}
else
        {cout<<"position incorrect"<<endl;}
}


void deleteat(int pos)
{node*curr=head,*temp;           
	if((pos>=1)&&(pos<=count()))
	{
		if(pos==1)
		{delet();
		}
		else{
		int c=1;
			while(c!=pos-1)
			{curr=curr->next;
			c++;
			}
		temp=curr->next;
                curr->next=(curr->next)->next;
                delete temp; }
}
else{cout<<"position incorrect"<<endl;}
} };

class stack{
public:
node*top;
linkedlist l1;
stack(){top=l1.head;}

int count(){
	return l1.count();}

void push(int value){
	l1.insert(value);
	top=l1.head;
}

void pop(){if(top!=NULL)
	{l1.delet();
	top=l1.head;}

else
	{cout<<"illegal move"<<endl;}
}
void display(){
l1.display();}
};

class queue{

public:
node*front;
node*end;
linkedlist l1;
queue(){ front=l1.head;
        end=NULL;}

int count(){
	return l1.count();}

void enqueue(int value){
	l1.insert(value);
	front=l1.head;
}

void dequeue(){if(front!=NULL)
	{l1.deleteat(count());
	front=l1.head;}

else
	{cout<<"illegal move"<<endl;}
end=l1.gettail();
}
void display(){
l1.display();}
};

int main(){
queue q1;
q1.enqueue(1);
q1.dequeue();
q1.dequeue();
cout<<q1.count();	


	return 1231;
}
