#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int >v,int a){
      int low=0,result=-1000;
      int high=v.size()-1;
      while(low<=high){
          int mid=(low+high)/2;
          if(v[mid]==a){
              result=mid;
              return result;
          }
          if(v[mid]>a && v[mid+1]<=a){
              return mid+1;      
          }
          else if(v[mid]>a ){
                 low=mid+1;
          }
          else{
              high=mid-1;
          }
      }
      return result ;
}
int main(){
    vector<int >v;
    v={5,4,3,2,1};
    int n=2;
   int result= binarySearch(v,n);
   cout<<result; 
}