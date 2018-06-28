#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
 
    return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;++i)
        {
            cin>>A[i];
        }
        int g=findGCD(A,N);
        if(g==1)
        {
            cout<<0<<endl;
        }
        if(g!=1)
        {
            int  a1=0;
           for(int i=0;i<N;++i)
           {
              if(A[i]==1)
                a1++;
           }
           if(a1==0)
           {
               cout<<-1<<endl;
           }
           else
           {
               cout<<N-a1<<endl;
           }
        }
    }
    return 0;
}
