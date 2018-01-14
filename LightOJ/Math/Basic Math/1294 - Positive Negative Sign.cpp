#include<bits/stdc++.h>
using namespace std;

long long int ret_sub(int n,int m)
{
    long long int adder=2*m;
    long long int segs=(n/adder);
    long long int extra=(segs*m*(m+1))/2;

    long long int res=m*(((segs-1)*(segs))/2)*adder;
    return res+extra;
}


int main()
{
    int test;
    while(scanf("%d",&test)!=EOF)
    {
        int cas=1;
        while(test--)
        {
            long long int n,m,flag=0,cnt=0,mpliyer=-1;
            scanf("%d%d", &n,&m);
            long long int sum=(n*(n+1))/2;
            long long int act=sum-(2*ret_sub(n,m));
            printf("Case %d: %lld\n",cas++,act);
        }

    }

}
