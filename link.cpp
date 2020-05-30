#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

node *root=NULL;

node* create(int data){
    node *root=(node*)malloc(sizeof(node));
    root->data=data;
    root->next=NULL;
    return root;
}
void insertLast(int data){
    node *temp=create(data);
    node *p=root;
    while(p->next!=NULL){
         p=p->next;   
    }
    p->next=temp;

}
void insertFirst(int data){
    node *temp=create(data);
    if(root==NULL){
        root=temp;
    }
    else{
        node *p=root;
       temp->next=root;
       root=temp;
    }
}
void insert(int data,int position){
    node *temp=create(data);
    node *t=root;
    for(int index=0;index<position-2;index++){
         t=t->next;
    }
    temp->next=t->next;
    t->next=temp;
}
void deleteFirst(){
    node *temp=root;
    root=root->next;
    free(temp);
}
void deleteLast(){
    node *temp=root;
    node *t=temp;
    while(temp->next!=NULL){
        t=temp;
        temp=temp->next;
    }
    t->next=NULL;
    
}
void deleteNode(int position){
    node *temp=root;
    node *p;
    for(int index=0;index<position-1;index++){
        p=temp;
        temp=temp->next;
    }
    p->next=temp->next;
    free(temp);
}
void view(){
    node *t=root;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
}
int main(){
    root=(node*)malloc(sizeof(node));
    root->data=100;
    root->next=NULL;
    insertLast(200);
    insertLast(300);
    insertFirst(400);
    insertFirst(400);
    insert(900,3);
    view();
    deleteNode(4);
    cout<<endl;
    view();
}