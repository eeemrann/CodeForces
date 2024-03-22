#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,A[2],B[2],C[2],D[2];
    cin>>a;
    while(a--){
        for(int i=0;i<2;i++){
       cin>>A[i];
        }
for(int i=0;i<2;i++){
cin>>B[i];
}
for(int i=0;i<2;i++){
cin>>C[i];
}
for(int i=0;i<2;i++){
cin>>D[i];
}
       if(A[0]==B[0]){
           int x=abs(A[1]-B[1]);
cout<<x*x<<endl;
       }
        else if(A[0]==C[0]){
           int x=abs(A[1]-C[1]);
cout<<x*x<<endl;
       }
       else if(A[0]==D[0]){
           int x=abs(A[1]-D[1]);
cout<<x*x<<endl;
       }
//cout<<x*x<<endl;
    }

    return 0;
}
