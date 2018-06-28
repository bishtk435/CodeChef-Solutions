#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long c,a,b;
        cin>>a>>b;
        c=b-1;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            if(b==0)
            {
                cout<<-1<<endl;
            }
            else if(b==1&&a!=0)
            {
                cout<<-1<<endl;
            }
            else
            {
            unsigned long long n1=0,n2=0;
            for(int i=0;a!=0;++i)
            {
                if(a%2==1)
                    ++n1;
                a/=2;
            }
            for(int i=0;c!=0;++i)
            {
                if(c%2==1)
                    ++n2;
                c/=2;
            }
            if(n1==n2)
                cout<<1<<endl;
            else if(n2>=n1+1)
                cout<<n2-n1+1<<endl;
            else if(n2<n1+1&&n1!=n2)
                cout<<2<<endl;
        }
        }
    }
 
    return 0;
}
