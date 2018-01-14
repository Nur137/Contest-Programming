#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    while(cin>>n)
    {
        string res="";
        int ones=n/2;
        int extra=n%2;
        if(extra==1 && n>2)res+='7';
        for(int i=0;i<ones-extra;i++)
        res+='1';
        cout<<res<<endl;
    }
}
