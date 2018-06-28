#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();
        int g=0,b=0;
        for(int i=0;i<l;++i)
        {
            if(s[i]=='f'||s[i]=='r'||s[i]=='i'||s[i]=='e'||s[i]=='z'||s[i]=='a')
            {
                if(b!=0)
                {
                    cout<<b;
                    b=0;
                }
                ++g;
            }
            else
            {
                if(g!=0)
                {
                    cout<<g;
                    g=0;
                }
                ++b;
            }
        }
        if(b==0)
            cout<<g<<endl;
        else if(g==0)
            cout<<b<<endl;
        
    }
    return 0;
}
