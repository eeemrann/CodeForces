#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c;

    d=a*(c*(c+1)/2);

    if(d<=b){
        cout<<0;
    }
    else{
        cout<<d-b;
    }
}
