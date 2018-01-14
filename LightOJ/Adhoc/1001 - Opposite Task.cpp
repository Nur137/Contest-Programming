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
            int a,val1,val2;
            scanf("%d", &a);
            if(a<10)
            {
                val1=a;
                val2=0;
            }
            else{
                val1=10;
                val2=a-10;
            }
            printf("%d %d\n",val1,val2);
        }

    }

}
