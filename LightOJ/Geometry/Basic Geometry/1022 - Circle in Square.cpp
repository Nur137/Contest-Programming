#include<bits/stdc++.h>
using namespace std;

#define pi 2 * acos (0.0)

int main()
{
    //cout<<pi;
    int test;
    while(scanf("%d",&test)!=EOF)
    {
        int cas=1;
        while(test--)
        {
            double r;
            scanf("%lf", &r);
            double area=(4*r*r)-(pi*r*r);
            printf("Case %d: %.2lf\n",cas++,area);
        }
    }
}

