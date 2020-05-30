#include<bits/stdc++.h>
using namespace std;
void sub(int a[],int n){
    for(int index=0;index<n;index++){
        for(int how=index;how<n;how++){
            for(int i=index;i<=how;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int a[]={1,2,3,4};
    sub(a,4);
}