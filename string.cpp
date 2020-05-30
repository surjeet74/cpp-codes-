#include<bits/stdc++.h>
using namespace std;
void generatesubarray(int a[],int n){
    for(int index=0;index<n;index++){
         for(int i=index;i<n;i++){
               for(int j=index;j<i;j++){
                   cout<<a[j];
               }
               cout<<endl;
         }
    }
}
int main(){
    int a[]={1,2,3,4,5};
    generatesubarray(a,5);
}
