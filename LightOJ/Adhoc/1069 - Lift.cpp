#include<bits/stdc++.h>
using namespace std;

int calc(int num1,int num2)
{
    return 4*(num1+abs(num1-num2))+19;
}
int main()
{
    int test;
    while(scanf("%d",&test)!=EOF)
    {
        int cas=1;
        while(test--)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            printf("Case %d: %d\n",cas++,calc(a,b));
        }
    }
}

