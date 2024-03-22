#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
   int a,b,n;
   cin>>a>>b>>n;
   map<int,int>mp;
   for(int i=0;pow(a,i)<=n;i++){
   for(int j=0;pow(b,j)<=n;j++){
    int num=pow(a,i)*pow(b,j);
    if(n%num==0){
        mp[n/num]++;
    }
   }
   }
   cout<<mp.size()<<endl;
}
}
