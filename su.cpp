#include<iostream>
using namespace std;
int z=-32000;
class heap{
public:
int a[100];
int cmax;
heap(){cmax=0;}
int parent(int i){return (i-1)/2;}
int right(int i){return 2*i+2;}
int left(int i){return 2*i+1;}
void swap(int *c,int *b)
{int temp=*c;
*c=*b;
*b=temp;}                                                                                          

void insert(int val){
int i=cmax++;
a[i]=val;
while((a[(i-1)/2]>a[i])&&(i!=0))
{swap(&a[i],&a[(i-1)/2]);
i=(i-1)/2;
}
}
int getmin(){return a[0];}

void display(){
for(int i=0;i<cmax;i++)
{cout<<a[i]<<",";}
}

 void dk(int i, int new_val) 
    { 
        a[i] = new_val; 
        while (i != 0 && a[parent(i)] > a[i]) 
        { 
            swap(&a[i], &a[parent(i)]); 
            i = parent(i); 
        } 
    } 
    
    int extractmin(){
    if(cmax==0){return a[0];}
    int root=a[0];
    a[0]=a[cmax-1];
    cmax--;
    heapify(0);
    return root;
   
    }
    void heapify(int i){
    int small=i;
    if((left(i)<cmax)&&(a[left(i)]<a[i]))
   {small=left(i);}
    if((right(i)<cmax)&&(a[right(i)]<a[small]))
    {small=right(i);}
    if(small!=i){
    swap(&a[i],&a[small]);
    heapify(small);}
    
    }
    
    
    void deleteat(int i){
    dk(i,z);
    extractmin();
    
    }
    

};


int main(){
heap h;
h.insert(56);
h.insert(13);
h.insert(1);
h.insert(8);
h.insert(6);
h.insert(18);
h.display();
cout<<"=";
h.deleteat(2);
h.display();
return 232;
}
