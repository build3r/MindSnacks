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
        cin>>n;
        unsigned int diff=INT_MAX;
        unsigned int tem;
        unsigned int h[n];
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }
        sort(h,h+n);
        for(int i=0;i<n-1;i++)
            {
               // cout<<h[i]<<endl;
                tem =   h[i] > h[i+1] ? h[i] - h[i+1] : h[i+1] - h[i];
                //cout<<tem<<endl;
                if(tem<diff)
                    diff = tem;
            }
        cout<<diff<<endl;
    }
    return 0;
}
