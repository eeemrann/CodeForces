
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        
        long long int sum=accumulate(a.begin(),a.end(),0);
        int element=sum/n;
        long long int extra=0;
        
        for(int i=0;i<n;++i)
        {
            if(a[i]>=element)
            {
                extra+=(a[i]-element);
            }
            else
            {
                long long int need=element-a[i];
                if(extra>=need)
                {
                    extra-=(need);
                }
                else
                {
                    cout<<"NO"<<endl;
                    return;
                }
                
            }
        }
        
        cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }

    return 0;
}