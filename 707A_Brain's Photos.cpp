#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,cnt=0;
    char c;
    vector<int>v;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
                cin>>c;
                v.push_back(c);
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]=='W'||v[i]=='B'||v[i]=='G'){
                cnt++;
           // cout<<"#Black&White"<<endl;
            //break;
       }
    }

       if(cnt==(a*b)){
        cout<<"#Black&White"<<endl;
       }
       else{
        cout<<"#Color"<<endl;
       }
}
