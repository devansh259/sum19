#include<iostream>
using namespace std;

class node{
public:
int val;
node*parent;
node*left;
node*right;
node(int value){val=value;
parent=NULL;
right=NULL;
left=NULL;
}
};

class bst{
public:
node*root;
bst(){root=NULL;}

void insert(int value){
i(root,value);}

void i(node*curr,int value){
node*temp=new node(value);
if(root==NULL){
temp->val=value;
root=temp;}
else if(temp->val>value)
{if(curr->left!=NULL)
{curr->left=temp;
temp->parent=curr;}
else{i(curr->left,value);}
}
else{if(curr->right!=NULL){
curr->right=temp;
temp->parent=curr;}
else{i(curr->right,value);}
}
}
void di(node*curr)
{if(curr!=NULL)
{di(curr->left);
cout<<curr->val<<",";
di(curr->right);
}
}
void display(){
di(root);
}




void search(int value){
s(root,value);}

node* s(node*curr,int value)
{if(curr==NULL){cout<<"not found";
return curr;}
else if(curr->val==value){cout<<"found";
return curr;}
else if(curr->val>value)
{s(curr->left,value);}
else{s(curr->right,value);}
}

node* findmax(node*curr)
{if(curr->right!=NULL)
{findmax(curr->right);}
return curr;
}

void replaceinparent(node*curr,node*child)
{if(curr->parent){
if(curr->parent->left=curr)
{curr->parent->left=child;}
else{curr->parent->right=child;}
}
if(child){child->parent=curr->parent;}
}

void d(node*current,int value,node*curr1){
if(current==NULL){return;}

node*curr=s(current,value);
if(curr==NULL){return;}
else{
if((curr->left!=NULL)&&(curr->right!=NULL))
{node*temp=findmax(curr->left);
curr->val=temp->val;
d(temp,temp->val,temp);
}
else if((curr->left!=NULL)||(curr->right!=NULL))
{if(curr->left!=NULL){replaceinparent(curr,curr->left);}
else{replaceinparent(curr,curr->right);}
}
else{replaceinparent(curr,NULL);}
}

}

void delet(int value)
{d(root,value,root);}


int count(node*curr){
curr=root;
return 1+ count(curr->left)+ count(curr->right);
}

int max(int a,int b){
if(a>b){return a;}
else return b;}

int height(node*curr){
curr=root;
return 1+max(height(curr->right),height(curr->left));
}

};

int main(){
bst b;
b.insert(34);
b.display();
return 2;
}




























































