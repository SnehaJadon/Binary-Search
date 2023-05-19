#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int d){
        data = d;
        left = NULL;        
        right = NULL;        
    }
};
void preorder(struct Node *n){
    if(n == NULL) return ;
    struct Node *temp = n;
    cout << n->data << " ";
    preorder(n->left);
    preorder(n->right);
}
void inorder(struct Node *n){
    if(n == NULL) return ;
    inorder(n->left);
    cout << n->data << " ";
    inorder(n->right);
}
void postorder(struct Node *n){
    if(n == NULL) return ;
    postorder(n->left);
    postorder(n->right);
    cout << n->data << " ";
}
int main(){
    struct Node *n = new Node(1);
    n->left = new Node(2);
    n->right = new Node(3);
    n->left->left = new Node(4);
    n->left->right = new Node(5);
    n->right->left = new Node(6);
    n->right->right = new Node(7);
    preorder(n);
    cout << endl;
    postorder(n);
    cout << endl;
    inorder(n);

    return 0;
}