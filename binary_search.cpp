#include<bits/stdc++.h>
using namespace std;

// iterative method
/*int binartSearch(int a[],int n,int x){
    int low=0,high=n-1,result=-1;
    while(low<=high){
       int  mid=(low+high)/2;
        if(a[mid]==x){
            result=mid;
            return mid;
        }
        else if(a[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
}*/

// recursive solution 

/*int binarysearch(int a[],int low,int high,int x){
    int result=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
           return  binarysearch(a,mid+1,high,x);
        }
        else{
            return binarysearch(a,low,mid-1,x);
        }
    }
    return result;
}*/

int binarysearch(int a[],int low,int high,int x){
    int result=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x){
            result =mid ;
           return result;
        }
        else if(a[mid]<x){
           return  binarysearch(a,mid+1,high,x);
        }
        else{
            return binarysearch(a,low,mid-1,x);
        }
    }
    return result;
}

int main(){
    int a[]={1,2,3,6,6,6,7,8};
   // int index=binartSearch(a,8,10);
 /*  int index=binarysearch(a,0,7,8);
    if(index!=-1){
        cout<<index+1;
    }
    else{
        cout<<"element is not found ";
    }
    */
   int right=binarysearch(a,0,7,6);
   cout<<right;
    return 0;
}