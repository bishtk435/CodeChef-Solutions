#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        int p=0;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]%m==0)
                ++p;
        }
        cout<<(unsigned long long)(pow(2,p)-1)<<endl;
    }
    return 0;
}
