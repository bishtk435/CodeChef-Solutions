#include<iostream>
unsigned long long fib(int a)
{
    int F[a];
    F[0]=1;
    F[1]=1;
    for(int i=2;i<a;++i)
    {
        F[i]=(F[i-1]%1000000007+F[i-2]%1000000007)%1000000007;
    }
    return F[a-1]%1000000007;
}
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        unsigned int N,M;
        cin>>M>>N;
        unsigned long long A[M],B[M];
        unsigned long long mod=1000000007;
        unsigned long long fa,fb;
        if(N>=3)
        {
            fa=fib(N-2);
            fb=fib(N-1);
        }
        unsigned long long r=0,n1=0,n2=0,i1=0;
        unsigned long long temp=0;
        for(int i=0;i<M;++i)
        {
            cin>>A[i];
            if(N>=3)
                {
            A[i]*=fa;
            A[i]%=mod;
            A[i]*=M;
            A[i]%=mod;
                }
        }
        for(int i=0;i<M;++i)
        {
            cin>>B[i];
            if(N>=3)
            {
                B[i]*=fb;
                B[i]%=mod;
                B[i]*=M;
                B[i]%=mod;
            }
        }
        for(int i=0;i<M;++i)
        {
            if(N>=3)
            {
            i1=(A[i]+B[i])%mod;
            r+=i1;
            }
            else if(N==1)
            {
                i1=((A[i]%mod)*(M%mod))%mod;
                n1+=i1;
            }
            else if(N==2)
            {
                i1=((B[i]%mod)*(M%mod))%mod;
                n2+=i1;
            }
        }
        if(N>=3)
        {
            cout<<r%mod<<endl;
        }
        else if(N==1)
        {
            cout<<n1%mod<<endl;
        }
        else if (N==2)
        {
            cout<<n2%mod<<endl;
        }
    }
    return 0;
}
