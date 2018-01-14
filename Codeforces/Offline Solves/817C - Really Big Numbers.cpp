#include<bits/stdc++.h>
using namespace std;

int retSum(long long int val)
{
    int res=0;
    while(val!=0)
    {
        res+=(val%10);
        val/=10;
    }
    return res;
}


int main()
{
    long long int val,diff;
    cin>>val;
    cin >> diff;
    long long int mid=val;
    long long int high=val,low=1;
    while(high>low)
    {
        mid=(high+low)/2;
        long long int comp=mid-retSum(mid);
        //cout<<mid<<endl;
        if(comp<diff)low=mid;
        else if(comp>=diff)high=mid;
        if(high-low==1)
        {
            if((low-retSum(low))<diff)mid=high;
            break;
        }
    }
    if(val-mid==0 && (mid-retSum(mid))<diff)cout<<"0"<<endl;
    else
    cout<<(val-mid)+1<<endl;
}
