#include<bits/stdc++.h>
using namespace std;

int main(){
     long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        int c=(abs(a-b));
        if(c%10 ==0){
            cout<<c/10<<endl;
        }
        else{
            cout<<c/10 +1<<endl;
        }
    }

}

