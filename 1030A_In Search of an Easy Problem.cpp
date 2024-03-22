#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,sum=0;
    vector<int>v;
    cin>>a;
    while(a--){
        cin>>b;
        v.push_back(b);
    }
    for(int i=0;i<v.size();i++){
    sum=sum+v[i];
    }
    if(sum==0){
        cout<<"Easy";
    }
    else{
        cout<<"Hard";
    }
}