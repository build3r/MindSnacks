#include <bits/stdc++.h>
using namespace std;

#define FST ios_base::sync_with_stdio(0)
#define INPT int t; cin>>t; while(t--)

int main()
{
    int n,res,x,temp;
    FST;
    INPT
    {
        cin>>n;
        //int speed[n];
        x=INT_MAX;
        res = 0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp<=x)
            {
                res++;
                x = temp;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
