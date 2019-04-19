#include <iostream>

using namespace std;

class Node{
    public:
        char data;
        Node* left, *right;
        Node(char data){
            this->data=data;
            left=right=NULL;
        }
};

void printInorder(Node *node){
    
    if(node==NULL){
        return;
    }

    printInorder(node->left);

    cout<<node->data<<" ";

    printInorder(node->right);
}

void printPostorder(Node *node){
    
    if(node==NULL){
        return;
    }

    printPostorder(node->left);


    printPostorder(node->right);
    cout<<node->data<<" ";
}

void printPreorder(Node *node){
    
    if(node==NULL){
        return;
    }

    cout<<node->data<<" ";
    printPreorder(node->left);


    printPreorder(node->right);
}


int main(){
    Node *node = new Node('a');
    node->left = new Node('b');
    node->right = new Node('c');
    node->left->left= new Node('d');
    node->left->right = new Node('e');

    cout<<endl<<"Inorder traversal of binary tree is "<<endl;
    printInorder(node);
    cout<<endl<<"Postorder traversal of binary tree is "<<endl;
    printPostorder(node);
    cout<<endl<<"Preorder traversal of binary tree is "<<endl;
    printPreorder(node);
}