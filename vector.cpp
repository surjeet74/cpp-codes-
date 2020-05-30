#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int >v={1,2,3,4,5,6};
    int i;
    vector<int >::iterator ptr;
    for(ptr=v.begin();ptr<v.end();ptr++){
        cout<<*ptr<<" ";
    }
    ptr=v.begin();
    advance(ptr,3);
    cout<<endl<<*ptr;
    vector<int >::iterator it=next(ptr,1);
    cout<<endl<<*it;
    vector<int >::iterator it2=prev(ptr,1);
    cout<<*it2;
    vector<int >v2={38,44,33,22,11};
    vector<int >::iterator surjeet=v2.begin();
    advance(surjeet,2);
    copy(v.begin(),v.end(),inserter(v2,surjeet));
    cout<<endl;
    for(surjeet=v2.begin();surjeet<v2.end();surjeet++){
             cout<<*surjeet<<" ";
    }
    sort(v2.begin(),v2.end());
    cout<<endl;
     for(surjeet=v2.begin();surjeet<v2.end();surjeet++)
            cout<<*surjeet<<" ";
      
}
