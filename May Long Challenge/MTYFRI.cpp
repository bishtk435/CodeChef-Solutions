#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        int  A[N];
        int ms=0,ts=0;
        for(int i=0;i<N;++i)
        {
            cin>>A[i];
            if(i%2==0)
            {
                ms+=A[i];
            }
            else
            {
                ts+=A[i];
            }
        }
        int mx,mn,imx,imn;
        
 
 
        for(int i=1;i<=K;++i)
        {
           mx=A[0];
           mn=A[1];
           imx=0;
           imn=1;
           for(int j=2;j<=N-1;j+=2)
           {
               if(mx<A[j])
               {
                   mx=A[j];
                   imx=j;
               }
           }
           for(int j=3;j<=N-1;j+=2)
           {
               if(mn>A[j])
               {
                   mn=A[j];
                   imn=j;
               }
           }
           ts=ts-mn+mx;
           ms=ms-mx+mn;
           A[imx]=mn;
           A[imn]=mx;
        }
        if(ts>ms)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
