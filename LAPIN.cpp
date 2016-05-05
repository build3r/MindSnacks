#include <bits/stdc++.h>
using namespace std;

#define FST ios_base::sync_with_stdio(0)
#define INPT int t; cin>>t; while(t--)

int main()
{
    int n,m,x;

    string s;
    FST;
    int t; cin>>t;
    while(t--)
    {
        int ch[26]={0};
        cin>>s;
        //cout<<s<<"   T = "<<t<<endl;
        int len = s.length();
        int skip = (len & 1);
        int i;
        for( i=0;i<len/2;i++)
            ch[s[i]-'a']++;
        for( i=(len/2)+skip;i<len;i++)
            ch[s[i]-'a']--;

        for(i=0;i<26;i++)
        {
            if(ch[i]!=0)
            {
                cout<<"NO\n";
                break;
            }
        }
        if(i==26)
            cout<<"YES\n";
        //ch[26]={0};
    }
    return 0;
}
