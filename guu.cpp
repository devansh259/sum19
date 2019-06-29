#include<iostream>
using namespace std;

class node{
public:
int val;
node*parent;
node*left;
node*right;
node(int newval){newval=val;
parent=NULL;
left=NULL;
right=NULL;}
};

class bst{
public:
node*root;
bst(){root=NULL;}
void i(int value){
insert(root,value);}

void insert(node*curr,int value){
node*temp=new node(value);
if(root==NULL){  
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
temp->val=value;
root=temp;
}

else if((curr->val)>(temp->val)){
if((curr->left)==NULL){
curr->left=temp;
temp->parent=curr;}
else{insert((curr->left),value);}
}

else if((curr->val)<=(temp->val)){
if((curr->right)==NULL){
curr->right=temp;
temp->parent=curr;}
else{insert((curr->right),value);}
}
}

void d(){
display(root);}

void display(node*curr){
if(curr==NULL){return;}
display(curr->left);
cout<<curr->val;
display(curr->right);
}

};


int main(){
bst b;
b.i(1);
b.i(2);
b.i(3);
b.d();
return 22;
}



