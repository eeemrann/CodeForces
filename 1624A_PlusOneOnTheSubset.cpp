#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,x,y,z;
vector<int>v;
cin>>a;
while(a--){
cin>>b;
for(int i=0;i<b;i++){
    cin>>c;
    v.push_back(c);
}
sort(v.begin(),v.end());

cout<<v[v.size()-1]-v[0]<<endl;
v.clear();
};
}
