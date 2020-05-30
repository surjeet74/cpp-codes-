#include<bits/stdc++.h>
using namespace std;
int i=0,a[1000];
int* convert(string str,int arg){
    if(str[arg]==NULL){
        return ;
    }
       if(str[arg]!=NULL){
           a[arg]=str[arg]-'0';
           convert(str,arg+1);
       }
}
int main(){
    string str;
    getline(cin,str);
    int *result=convert(str,i);
    
}
