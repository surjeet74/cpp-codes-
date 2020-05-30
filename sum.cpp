#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    if(a==0 || b==0){
        return 0;
    }
    if(b==1){
        return a;
    }
      int temporary=a+sum(a,b-1);
      return temporary;
}
int main(){
    int a,b;
    cin>>a>>b;
    int result =sum(a,b);
    cout<<result;
}
