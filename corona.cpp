#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        vector<int >v,result,final;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
         for(int i=0;i<n;i++){
            for(int j=i;j<n-1;j++){
                if(v[j+1]-v[j]<=2){
                    count++;
                }
                else{
                    break;
                }
            }
            result.push_back(count);
            count=0;
        }
        final.push_back(result[0]);
        int s=0;
        s++;
        for(int i=1;i<n;i++){
            int a=0;
            if(result[i]!=0){
                final.push_back(result[i]+final[s]);
                s++;
            }
            else{
        
                final.push_back(result[i]+1);
                s++;
            }
        }
        for(int i:final){
            cout<<i<<" ";
        }
    }
}