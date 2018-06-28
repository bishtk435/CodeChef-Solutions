#include<iostream>
#include<math.h>
using namespace std;
int primeFactors(int n)
{
    int sum=0;
    int a=0;
    while (n%2 == 0)
    {
        if(a==0)
        {
            ++sum;
            ++a;
        }
        n = n/2;
    }
 
 
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        int b=0;
        while (n%i == 0)
        {
            if(b==0)
           {
               ++sum;
               ++b;
           }
            n = n/i;
        }
    }
 
    if (n > 2)
        ++sum;
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int tsum=0;
        for(int i=n;i<m;++i)
        {
                tsum+=primeFactors(i);
        }
 
        cout<<tsum<<endl;
    }
    return 0;
}
