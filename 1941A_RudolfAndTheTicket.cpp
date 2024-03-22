#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,A[100],B[100];
    cin>>a;
    while(a--){
            int e=0;
        cin>>b>>c>>d;
        for(int i=0;i<b;i++){
            cin>>A[i];
        }
        for(int j=0;j<c;j++){
            cin>>B[j];
        }

        for(int i=0;i<b;i++){
            for(int j=0;j<c;j++){
                if(A[i]+B[j]<=d){
                    e++;
                }
            }
        }
        cout<<e<<endl;

    }


}
