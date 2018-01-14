#include <stdio.h>

int a,b,c;


int main()
{
    int test;
    scanf("%d",&test);
    int cas=1;
    while(test--)
    {

        scanf("%d%d%d",&a,&b,&c);
        if( (a*a==b*b+c*c)  ||  (b*b==a*a+c*c)   ||   (c*c==b*b+a*a) )
            printf("Case %d: yes\n",cas++);
            else printf("Case %d: no\n",cas++);
    }
}
