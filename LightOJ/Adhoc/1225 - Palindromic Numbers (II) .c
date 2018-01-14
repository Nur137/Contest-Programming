#include <stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
        int cas=1;
        while(test--)
        {
            int val,valc,rev=0;
            scanf("%d",&val);
            valc=val;
            while(val)
            {
                rev=rev*10+val%10;
                val/=10;
            }
            if(valc!=rev)printf("Case %d: No\n",cas++);
            else printf("Case %d: Yes\n",cas++);
        }
}
