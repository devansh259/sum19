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
}



};
int main(){int i;
	linkedlist n1,n2;
for(i=10;i>0;i--)
{n1.insert(i);}	
cout<<n1.count();
	


	return 1231;
}
