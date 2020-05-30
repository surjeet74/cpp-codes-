#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left,*right;
};

node* create(int data){
    node *root=(node*)malloc(sizeof(node));
    root->data=data;
    root->left=root->right=NULL;
    return root;
}

node* insert(node *root,int data){
    if(root==NULL){
        root=create(data);
    }
    else if(data<root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}
void view(node *root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    view(root->left);
    view(root->right);
}
void minimum(node *root){
    while(root->left!=NULL){
        root=root->left;
    }
    cout<<endl<<root->data;
}
void maximum(node *root){
    while(root->right!=NULL){
        root=root->right;
    }
    cout<<endl<<root->data;
}
int search(node *root,int data){
    int result=-1;
    if(root->data==data){
        return result;
    }
    else if(data<root->data){
       return search(root->left,data);
    }
    else{
       return search(root->right,data);
    }
    
}
int main(){
    node *root=NULL;
    root=insert(root,100);
    root=insert(root,200);
    root=insert(root,2);
    root=insert(root,4);
    view(root);
    minimum(root);
    maximum(root);
    
}