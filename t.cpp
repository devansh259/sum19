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

class StackArr{
public:
int top;
int size;
int a[50];
StackArr(int size){top=0; this->size = size;}


void push(int b)
{
a[0]=b;
top++;
}
void pop()
{if(size!=0)
{top
else{cout<<"fill something to delete";}}

void display()
{for(int i=0;i<size;i++)
{cout<<a[i];}
}

};


class QueueArr{
public:
int top;
int size;
int a[50];
QueueArr(int size){top=0;this->size=size;}

void push(int b)
{for(int i=0;i<size;i++)
{a[i+1]=a[i];}
a[0]=b;
}
void pop()
{if(size!=0)
{size--;
 }
else{cout<<"fill something to delete";}}

void display()
{for(int i=0;i<size;i++)
{cout<<a[i];}
}

};

class qs{
public:
node*front;
node*end;
stack s1;
stack s2;
qs(){front=s1.top;
end=s2.top;
node*curr1=front;
	while(curr1!=NULL)
	{
	curr1=curr1->next;}

node*curr2=end;
	while(curr2!=NULL)
	{
	curr2=curr2->next;}
  curr1=curr2;  }
int count(){
	return s1.count();}

void push1(int value)
        {s1.push(value);}

void pop1(){if(front!=NULL)
	{s2.pop();}
else
	{cout<<"illegal move"<<endl;}
}
void display(){
s1.display();}
};

class sq{
public:
node*top;
queue q1;
queue q2;
sq(){q1.front=q2.end;
     q1.end=q2.front;
top=q1.front;}
int count(){
	return q1.count();}

void push1(int value)
        {q1.enqueue(value);}

void pop1(){if(top!=NULL)
	{q2.dequeue();}
else
	{cout<<"illegal move"<<endl;}
}
void display(){
q1.display();}
};

int main(){
	
StackArr s1(10);
s1.push(2);
s1.push(3);
s1.display();

	return 1231;
}
