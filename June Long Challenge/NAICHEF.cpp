#include<iostream>
#include<iomanip>
using namespace  std;
int main()
{
    int  T;
    cin>>T;
    while(T--)
    {
        int N,A,B;
        cin>>N>>A>>B;
        int  f[N];
        int a=0,b=0;
        for(int i=0;i<N;++i)
        {
            cin>>f[i];
            if(f[i]==A)
                ++a;
            if(f[i]==B)
                ++b;
        }
        cout<<setprecision(10)<<(double)a/N*b/N<<endl;
 
    }
    return 0;
}
