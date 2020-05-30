#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *right,*left;
};

node* create(int data){
    node *root=new node();
    root->data=data;
    root->right=root->left=NULL;
    return root;
}

node* insert(node *root,int data){
    if(root==NULL){
        root=create(data);
        return root;
    }
    else if(data<root->data){
       root->left= insert(root->left,data);
       return root;
    }
    else {
        root->right=insert(root->right,data);
        return root;
    }
    
}
void view(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data;
    view(root->left);
    view(root->right);
}
void findMinimum(node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    cout<<root->data;
}
node* search(node* root,int data){

    if(root->data==data || root==NULL){
        return root;
    }
    else if(data<root->data){
       return  search(root->left,data);
    }
    else {
       return  search(root->right,data);
    }
    
}
int main(){
          node *root=NULL;
          root=insert(root,100);
          insert(root,200);
          insert(root,20);
          insert(root,56);
        //  view(root);
        //  cout<<endl;
        //  findMinimum(root);
        //  cout<<endl;
          node* result=search(root,45);
          if(result!=NULL){
              cout<<"elemnt is found inside the tree";
          }
          if(search(root,45)==NULL){
              cout<<"we din't find the element";
          }
}
