#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        vector<int >v;
        vector<int >right;
        vector<int >result;
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
            right.push_back(count);
            count=0;
        }
        int temp=right[0];
        result.push_back(temp);
        for(int i=1;i<n;i++){
           if(right[i]!=0){
               result.push_back(right[i]+temp);
               int temp=right[i]+temp;
           }
           else{
               result.push_back(right[i]+1);
               temp=right[i]+1;
           }
        }
       
        for(int x:right){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int x:result){
            cout<<x<<" ";
        }
        cout<<endl;
        int min=*min_element(result.begin(),result.end());
        int max=*max_element(result.begin(),result.end());
        cout<<min+1<<" "<<max+1;

       
    }
   
}
surjeet singh has created this all 