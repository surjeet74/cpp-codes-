#include<bits/stdc++.h>
using namespace std;
int main(){
        set<int >s;
        s.insert(1);
        s.insert(2);
        s.insert(-1);
        s.insert(-9);
        
        for(int x : s){
            cout<<x<<" ";
        }
    auto it=s.find(-1);
    if(it==s.end()){
        cout<<"not present ";
    }
    else{
        cout<<"elemnt is present ";
    }
    auto it2=s.lower_bound(-1);
    auto it3=s.upper_bound(-1);
    cout<<endl<<*it2;
    cout<<endl<<*it3;
    cout<<endl;
    s.erase(-1);
    for(int x:s){
        cout<<x<<" ";
    }
}

