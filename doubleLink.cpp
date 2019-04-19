#include <iostream>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
    struct node * prev;
}node;

node * CreateNode(){
    node * p=(node *)malloc(sizeof(node));
p->next=NULL;
p->prev=NULL;

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

q->prev=p;

if(q->next!=NULL){
    q->next->prev=q;
}

}

void display(node * p){
    node * temp=CreateNode();
    temp = p;
    cout<<"\n data in list :: "<<endl;
    while(p->prev!=p){
        cout<<p->data<<"\t";
        p=p->next;
    }
           cout<<p->data;

}




int main(){
node * p=CreateNode();
p->data=3;
for(int i = 0; i <5; i++)
{
    insertNode(p);
}

display(p);



    return 0;
}