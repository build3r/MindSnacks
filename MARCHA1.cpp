#include <bits/stdc++.h>
using namespace std;

#define FST ios_base::sync_with_stdio(0)
#define INPT int t; cin>>t; while(t--)

int main()
{
    int n,m,x;
    FST;
    INPT
    {
        cin>>n>>m;
        int notes[n];
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            cin>>notes[i];
        }
        int iter = 1<<n;
        //cout<<"2^n "<<iter<<endl;
        for(int i=0;i<iter;i++)
        {

            int sum = 0;
            for(int j=0;j<n;j++)
            {
               // cout<<"J = "<<(1<<j)<<endl;
                if(i&(1<<j))
                {
                    sum+=notes[j];
                }
            }
           // cout<<"Sum = "<<sum<<endl;
            if(sum==m)
                {
                    flag = false;
                    cout<<"Yes\n";
                    break;
                }
        }
        if(flag)
        cout<<"No\n";

    }
    return 0;
}
