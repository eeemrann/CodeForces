#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b;
        if(b>=a-1){
            cout<<1<<endl;
        }
        else if(b<=a-1){
            cout<<a<<endl;
        }
    }
}
