#include<bits/stdc++.h>
using namespace std;

double sum[1000001];
int main()
{
    for(int i=1;i<1000001;i++)
        sum[i]=log10(i)+sum[i-1];

    int test;
    while(scanf("%d",&test)!=EOF)
    {
        int cas=1;
        while(test--)
        {
            int a,b;
            scanf("%d%d", &a,&b);
            double res=sum[a]/log10(b)+1;
            printf("Case %d: %d\n",cas++,(int)res);
        }

    }

}
