#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    vector<int >v={10,20,30,40,50};
    for(i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    vector<int >::iterator surjeet=v.begin();
    advance(surjeet,3);
    v.insert(surjeet,100);
    cout<<endl;
     for(i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
  cout<<endl;
  cout<<"the value of surjeet pointer is "<<*surjeet;
  cout<<endl;
    v.erase(v.begin());
     for(i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
    auto singh=find(v.begin(),v.end(),50);
    if(singh!=v.end())
    cout<<singh-v.begin();
}