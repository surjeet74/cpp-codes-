#include<bits/stdc++.h>
using namespace std;
void print(stack<int >stac){
while(!stac.empty()){
    cout<<stac.top()<<" ";
    stac.pop();
}
}
int main(){
    stack<int >stac;
    int i;
    stac.push(1);
    stac.push(2);
    stac.push(3);
    stac.push(4);
    stac.push(5);
    stac.push(5);
    print(stac);

}