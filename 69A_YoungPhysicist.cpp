#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,sum1=0,sum2=0,sum3=0;
    vector<int>v1,v2,v3;
    cin>>t;
    while(t--){
        int a,b,c;
            cin>>a;
            v1.push_back(a);
            cin>>b;
            v2.push_back(b);
            cin>>c;
            v3.push_back(c);
        }
        for(int i=0;i<v1.size();i++){
        sum1=sum1+v1[i];
        }

        for(int i=0;i<v2.size();i++){
        sum2=sum2+v2[i];
        }
        for(int i=0;i<v3.size();i++){
        sum3=sum3+v3[i];
        }


        if(sum1==0 && sum2==0 && sum3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


