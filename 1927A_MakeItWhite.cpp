#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    cin>>a;
    while(a--){
        cin>>b;
        deque<char>dq;
        for(long long i=0;i<b;i++){
            char c;
            cin>>c;
            dq.push_back(c);
        }

        while(!dq.empty()){
            if(dq.front()=='W'){
                dq.pop_front();
            }
            else{
                break;
            }
        }

         while(!dq.empty()){
            if(dq.back()=='W'){
                dq.pop_back();
            }
            else{
                break;
            }
        }

        /*long long x=0;
        for(long long i=0;i<dq.size();i++){
            if(dq[i]=='0'){
                x++;
            }
        }*/

        cout<<dq.size()<<endl;



    }

}
