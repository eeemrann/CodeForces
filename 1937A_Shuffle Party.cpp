#include<bits/stdc++.h>
using namespace std;

int main(){
     long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a;
        b=(int)log2(a);
    if(a==0){
        cout<<"1"<<endl;
    }

    else{
            //cout<<b<<endl;
    cout<<(long long)(pow(2,b))<<endl;
        //cout<<pow(2,b)<<endl;
    }
    }

}

