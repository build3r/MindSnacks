#include <bits/stdc++.h>
using namespace std;

#define FST ios_base::sync_with_stdio(0)
#define INPT int t; cin>>t; while(t--)

int main()
{
    int n,a,k;
    FST;
    //INPT
    {
     cin>>a>>n>>k;
     n=n+1;
     for(int i=0;i<k;i++)
     {
         cout<<((int)((a)/pow(n,i)))%n<<" ";
     }
     cout<<endl;
    }
    return 0;
}
