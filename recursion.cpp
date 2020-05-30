#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    int m,n,i;
    cin>>n;
    vector<int >scores,alice,rank;
    for(i=0;i<n;i++){
        int a;
        cin>>a;
        scores.pb(a);
    }
    cin>>m;
    for(i=0;i<m;i++){
        int a;
        cin>>a;
        alice.pb(a);
    }
    rank.insert(rank.begin(),1);
   for(i=1;i<n;i++){
       if(scores[i]==scores[i-1]){
           rank.pb(rank[i-1]);
       }
       else{
           rank.pb(rank[i-1]+1);
       }
   }
   for(i=0;i<rank.size();i++){
       cout<<rank[i]<<" ";
   }
   for(i=0;i<m;i++){
       if(alice[i]>scores[0]){
           cout<<1<<endl;
       }
       else if(alice[i]<scores[scores.size()-1]){
           cout<<scores.size();
       }
       else{
           scores.pb(alice[i]);
           sort(scores.begin(),scoers.end());
          int result= find(scores.begin(),scores.end(),alice[i]);
             rank[result-scores.begin()]
       }
   }
}