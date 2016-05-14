#include <bits/stdc++.h>
using namespace std;

#define FST ios_base::sync_with_stdio(0)
#define INPT int t; cin>>t; while(t--)

int main()
{
    int n,m,x,P,S;
    double x1,y1,x2,y2,v1,v2;
    FST;
    INPT
    {
        x1=y1=x2=y2=v1=v2=0.0;
        cin>>P>>S;
        x1 = (double)(P+sqrt(P*P - 24*S))/12;
        y1 = (double)(P/4 - 2*x1);
        x2 = (double)(P-sqrt(P*P - 24*S))/12;
        y2 = (double)(P/4 - 2*x2);
        if(x1<y1)
            v1 = x1*x1*y1;
        v2 = x2*x2*y2;
        if(v1>v2)
        printf("%.2lf\n",v1);
        else
        printf("%.2lf\n",v2);

    }
    return 0;
}
