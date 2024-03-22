#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        long long A;
        cin>>A;

         if(A%2==0)
        {
            cout<<((A/2)-1)<<endl;
        }
        else
        {
            cout<<A/2<<endl;
        }
    }

    }