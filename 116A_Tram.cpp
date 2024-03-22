#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,d=0;
    vector<int>v,v2;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        v.push_back(a);
        v.push_back(b);
    }
    for(int i=0;i<v.size();i++){
        d=abs(d-v[i]+v[i+1]);
        v2.push_back(d);
        v.erase(v.begin(),v.begin()+1);
        v[-1]=d;
    }

    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    /*for(int i=0;i<v2.size();i++){
        cout<<v2[i];
    }*/

    cout<<v2[0];

}
