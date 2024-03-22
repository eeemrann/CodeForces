#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,cnt=0,cntt=0;
        cin>>a;
        int b=a;
        while(b!=0){
            cnt++;
            b=b/10;
        }
        int x=1*pow(10,cnt-1);

        if(a<=10 || (a%x)==0){
            cout<<1<<endl;
            cout<<a<<endl;
        }
        else{
            int c=a;
            for(int i=0;i<cnt;i++){
            if(c%10!=0){
                    cntt++;
                }
                c=c/10;
            }
            cout<<cntt<<endl;

            int d=a;
            for(int i=0;i<cnt;i++){
                if(d%10!=0){
                cout<<(d%10)*pow(10,i)<<" ";
                }
                d=d/10;
            }
            cout<<endl;
        }
    }
}
