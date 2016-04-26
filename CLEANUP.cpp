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
        char jobs[1001]={};
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            cin>>x;
            jobs[x]='x';
        }
        cout<<endl;
        char q = 'c';
        for(int i=1;i<n+1;i++)
        {
            if(jobs[i]=='x')
                continue;

            if(q=='c')
            {
               cout<<i<<" ";
              q='a';
            }
            else
               {
                   jobs[i]=q;
                   q='c';
               }
        }
        cout<<endl;
        for(int i=1;i<n+1;i++)
        {
            if(jobs[i]=='a')
                cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
