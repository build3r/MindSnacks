#include <bits/stdc++.h>
using namespace std;

#define FST ios_base::sync_with_stdio(0)
#define INPT int t; cin>>t; while(t--)

int main()
{
    int n,m,x;
    FST;
    int a[102];
    INPT
    {
        int i;
        cin>>n>>a[0];
        if(n==1)
        {
            cout<<"YES\n";
            continue;
        }
        int local_inv =0, inv = 0;
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i-1]>a[i])
                local_inv++;
        }
        for(i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    inv++;
            }
        }
        if(inv==local_inv)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
