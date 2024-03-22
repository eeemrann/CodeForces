#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,a,b,c,d;
    cin>>x;
    while(x--)
    {
        cin>>a>>b>>c>>d;
        int y=(b-a)/(c+d);
        int z=(b-a)%(c+d);

        if(z) cout<<"-1"<<endl;
        else cout<<y<<endl;

    }

}
