#include <bits/stdc++.h>
using namespace std;

#define FST ios_base::sync_with_stdio(0)

int main()
{
    int n,m,x,k;
    char c,temp;
    FST;
    cin>>n>>k;
    bool twt[1010];
    memset(twt,0,sizeof(twt));
    int curr_open = 0;
    cin.clear();
    for(int i=0;i<k;i++)
    {
        while((temp=cin.get())!='\n')
        {
            c=temp;
        }
        if(c=='L')
        {
            curr_open = 0;
            memset(twt,0,sizeof(twt));
        }
        else
        {
            x = c-'0';
            twt[x]^=true;
            if(twt[x])
                curr_open++;
            else
                curr_open--;
        }
        cout<<curr_open<<endl;

    }
    return 0;
}
