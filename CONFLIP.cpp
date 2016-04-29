#include <bits/stdc++.h>
using namespace std;

#define FST ios_base::sync_with_stdio(0)
#define INPT int t; cin>>t; while(t--)

int main()
{

    FST;
    INPT
    {
        int n,q,st,g;
        cin>>g;
        for(int i=0;i<g;i++)
        {
            cin>>st>>n>>q;
            int res;
            if(n&1)
                if(st==q)
                cout<<(n>>1);
                else
                cout<<(n>>1)+1;
            else
                cout<<(n>>1);
//            if(st==1)
//                if(q==1)
//                    cout<<(n>>1);
//                else
//                    cout<<n-(n>>1);
//            else
//                if(q==2)
//                    cout<<(n>>1);
//                else
//                    cout<<n-(n>>1);
            cout<<endl;
        }
    }
    return 0;
}
