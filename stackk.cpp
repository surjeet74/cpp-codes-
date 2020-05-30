#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *right,*left;
};

node* create(int data){
    node *root=(node*)malloc(sizeof(node));
    root->data=data;
    root->right=root->left=NULL;
    return root;
}
node* insert(node* root,int data){
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

int main(){

      node *root=NULL;
      root=insert(root,100);
      cout<<root->data;
      insert(root,200);
      cout<<(root->right)->data;
      cout<<endl;
       insert(root,200);
       insert(root,300);
       insert(root,400);
       insert(root,20);
       insert(root,2);
       view(root);
}