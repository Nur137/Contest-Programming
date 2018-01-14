#include<bits/stdc++.h>
using namespace std;

int A[4]={8,4,2,6};

int main()
{
    int x;
    while(cin>>x)
    {
        if(x==0)cout<<"1"<<endl;
        else
        cout<<A[(x-1)%4]<<endl;
    }
}
