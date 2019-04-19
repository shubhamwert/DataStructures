#include <iostream>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
}node;

node * CreateNode(){
    node * p=(node *)malloc(sizeof(node));
p->next=NULL;

return p;


}
void insertNode(node *p){
node * q=new node();
int data;

cout<<"Enter Data ";
cin>>data;
q->data=data;
q->next=p->next;
p->next=q;

}

void display(node * p){
    node * temp=CreateNode();
    temp = p;
    cout<<"\n data in list :: "<<endl;
    while(p->next!=NULL&&p->next!=temp){
        cout<<p->data<<endl;
        p=p->next;
    }
            cout<<p->data<<endl;

}
void Cdisplay(node * p,int n){
    node * temp=CreateNode();
    temp = p;
    cout<<"\n data in list :: "<<endl;
   while(n>=0){
      
   
    while(p->next!=temp){
        cout<<p->data<<endl;
        p=p->next;
    }
            cout<<p->data<<endl;
            p=p->next;
            n--;
   }
}

void makeCircular(node *p){
    node *temp=CreateNode();
    temp=p;
    while(temp->next!=NULL){
       
    temp=temp->next;        
    }
    
    temp->next=p;
    cout<<"circular complete LInked List Created"<<endl;
    
}

int main(){
node * p=CreateNode();
p->data=3;
for(int i = 0; i <5; i++)
{
    insertNode(p);
}

display(p);
makeCircular(p);
Cdisplay(p,3); 

    return 0;
}