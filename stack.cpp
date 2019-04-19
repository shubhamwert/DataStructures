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
void push(node *p){
node * q=new node();
int data;

cout<<"\nEnter Data To Push  ";
cin>>data;
q->data=data;
q->next=p->next;
p->next=q;
cout<<"\nPUSH operation performed  \n"<<endl;

}
node * pop(node * p){
    node *q = p;
    p=p->next;
    free(q); 
    cout<<"\nPOP operation performed  \n"<<endl;
    return p;
}

void TOP(node *p){
    cout<<"\ndata at top of stack = "<<p->data<<endl;
}



int main(){
node * p=CreateNode();
p->data=3;
for(int i = 0; i <5; i++)
{
    push(p);
}

TOP(p);
p=pop(p);
TOP(p);
    return 0;
}