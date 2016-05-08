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
        x=0;
        string j,s;
        int a[200]={0};
        cin>>j>>s;
        n = s.length();
        for(int i=0;i<n;i++)
        {
            a[s[i]]++;
        }

        n = j.length();
        for(int i=0;i<n;i++)
        {
            x+=a[j[i]];
            a[j[i]]=0;
        }
        cout<<x<<endl;
    }
    return 0;
}

