#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;long long count=0;
    cin>>a;

    while(a>0){
            if(a%10==4 ||a%10==7){
                 count++;
            }
        a=a/10;
    }

    if( count==4 || count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
