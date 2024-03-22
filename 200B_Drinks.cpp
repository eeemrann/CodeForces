#include<bits/stdc++.h>
//#include <iomanip>
//#include <iostream>
using namespace std;

int main(){
    int A[110],a;
    double sum=0.0,d=0.0;
    cin>>a;

    for(int i=0;i<a;i++){
        cin>>A[i];
    }

        for(int i=0;i<a;i++){
            sum=sum+A[i];
        }
        d= sum/a;
        cout<<fixed<<setprecision(12)<<d;
}
