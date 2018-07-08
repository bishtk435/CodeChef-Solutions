#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"1 1";
        int ind=(int)n/2;
        for(int i=1;i<=ind;++i)
        {
            cout<<"0";
        }
        cout<<endl;
    }
}
