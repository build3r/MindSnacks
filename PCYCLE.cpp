#include <bits/stdc++.h>
#include <string>
using namespace std;

#define FST ios_base::sync_with_stdio(0)
#define INPT int t; cin>>t; while(t--)

int main()
{
    int n,m,x;
    FST;
    cin>>n;
    int a[n+1];
    bool v[n+1];
    memset(v,0,sizeof(v));
    int i;
    for(i=1;i<n+1;i++)
        cin>>a[i];
    int vis = 0;
    int c = 1;
    int l = 0;
    vector< vector<int>> res ;

     x = 0;
   do
    {
        vector<int> temp;
        while(v[c]==0)
        {
            v[c]=1;


            temp.push_back(c);
            c = a[c];
        }
        temp.push_back(c);
        res.push_back(temp);
        x++;
        //cout<<c<<endl;
        for(i=c;i<n+1;i++)
          {
              if(v[i]==0)
               {
                 c= i;
                 break;
               }
          }

    } while(v[c]==0);
    cout<<x<<endl;
    for(i=0;i<x;i++)
    {
        vector<int> d = res[i];
        for(int j = 0;j<d.size();j++)
            {
                cout<<d[j]<<" ";
            }
        cout<<endl;
    }
    return 0;
}
