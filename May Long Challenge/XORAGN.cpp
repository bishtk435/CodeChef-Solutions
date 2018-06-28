#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   scanf("%d",&T);
   while(T--)
   {
       int N;
       scanf("%d",&N);
       int A[N];
       int c=0;
       for(int i=0;i<N;++i)
       {
           scanf("%d",&A[i]);
           int b=2*A[i];
           c=c^b;
       }
       cout<<c<<endl;
   }
}
