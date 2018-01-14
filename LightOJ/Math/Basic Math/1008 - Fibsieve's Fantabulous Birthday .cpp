#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test;
    while(scanf("%d",&test)!=EOF)
    {
        int cas=1;
        while(test--)
        {
            long long int row,col,val,x;
            scanf("%lld",&val);
            x=sqrt((double)val);
            //printf("%d",x);
            if(x%2==0)
            {

                int req=val-x*x;
                if(req==0)
                {
                row=1;
                col=x;
                }
                else if(req<=x+1)
                {
                row=req;
                col=x+1;
                }
                else{
                req-=(x+1);
                row=x+1;
                col=x+1-req;
                }
            }
            else{
                 int req=val-x*x;
                if(req==0)
                {
                row=x;
                col=1;
                }
                else if(req<=x+1)
                {
                col=req;
                row=x+1;
                }
                else{
                req-=(x+1);
                col=x+1;
                row=x+1-req;
                }
            }
            printf("Case %lld: %lld %lld\n",cas++,(long long int)col,(long long int)row);
        }

    }

}
