#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int test;
    int assigned[209],priority[209][109];
    while(scanf("%d",&test)!=EOF)
    {
        int cas=1;
        int n,i,j,k;
        while(test--)
        {
            scanf("%d",&n);
            for(int i=1;i<=2*n;i++)
            {
                assigned[i]=-1;
            }

            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                    scanf("%d",&priority[i][j]);
            }

            for(i=n+1; i<=2*n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    int val;
                    scanf("%d",&val);
                    priority[i][val]=j;
                }
            }
            int cnt=0;

leb:

            for(i=1; i<=n; i++)
            {

                for(j=1; j<=n; j++)
                {
                    if(assigned[i]!=-1)break;
                    int now=priority[i][j];
                    if(assigned[now]==-1 )
                    {
                        assigned[now]=i;
                        assigned[i]=now;
                        cnt++;
                        break;
                    }
                    else if (priority[now][i] < priority[now][assigned[now]])
                    {
                        assigned[assigned[now]]=-1;
                        assigned[now]=i;
                        assigned[i]=now;
                        break;
                    }
                }
            }
            if(cnt!=n)goto leb;

            printf("Case %d: ",cas++);
            for(i=n+1; i<2*n; i++)
            {
                printf("(%d %d) ",assigned[i],i);
            }
            printf("(%d %d)\n",assigned[i],i);
        }
    }
}
