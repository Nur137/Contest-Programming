
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
            int n,sum=0,x=0;
            scanf("%d", &n);
            while(n--)
            {
                cin>>x;
                if(x>0)
                sum+=x;
            }
            printf("Case %d: %lld\n",cas++,sum);
        }

    }

}
