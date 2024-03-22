#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, x, y, z;
    cin >> a;
    while (a--)
    {
        cin >> x >> y >> z;
        
        if (z % x >= y)
        {
            cout << z - (z % x - y) << endl;
        }
        else
        {
            cout << z - (z % x + x - y) << endl;
        }
    }
}
