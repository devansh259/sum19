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

else if((curr->val)>value){
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
else{
display(curr->left);
cout<<curr->val;
display(curr->right);
}
}

void s(int value){search(root,value);}

node*search(node*curr,int value)
{if(curr==NULL){cout<<"not found";
return curr;}
else if(curr->val==value){cout<<"found";
return curr;}
else if((curr->val)>value){return search((curr->left),value);}
else {return search((curr->right),value);}
}

node* findmax(node*curr){
if(curr->left!=NULL){
findmax(curr->left);}
return curr;}

void replaceinparent(node*curr,node*child)
{if((curr->parent)!=NULL){
if(curr->parent->left==curr)
{curr->parent->left=child;}
else{curr->parent->right=child;}
}
if(child!=NULL)
{child->parent=curr->parent;}
}

void d(int value){
delet(search(root,value));
}

void delet(node*curr){
if(curr==NULL){return;}
else if((curr->left==NULL)&&(curr->right==NULL))
{replaceinparent(curr,NULL);}

else if(curr->left==NULL)
{replaceinparent(curr,curr->right);}
else if(curr->right==NULL)
{replaceinparent(curr,curr->left);}
else{
replaceinparent(curr,findmax(curr->left));
delet(curr);}
}
int count(node*curr){
if(curr==NULL){return 0;}
else{return (1+count(curr->left)+count(curr->right));}
}
int max(int a,int b)
{if(a>b){return a;}
else {return b;}}

int height(node*curr){
if(curr==NULL){return 0;}
return 1+ max(height(curr->left),height(curr->right));}

};


int main(){
bst b;
b.i(10);
b.i(2);
b.i(13);
b.i(52);
b.i(4);
b.i(16);
b.i(7);
b.d();
b.d(4);
b.d();
cout<<b.count(b.root);

return 22;
}



