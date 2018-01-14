#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,x1,x2,y1,y2;
    while(scanf("%d",&test)!=EOF)
    {
        int cas=1;
        while(test--)
        {
            vector<string> vect;
            scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
            int cows;
            scanf("%d", &cows);
            while(cows--)
            {
                int a,b;
                scanf("%d%d", &a,&b);
                if(a>=x1 && a<=x2 && b>=y1 && b<=y2)vect.push_back("Yes");
                else vect.push_back("No");
            }
            printf("Case %d:\n",cas++);
            int s=vect.size();
            for(int i=0;i<s;i++)cout<<vect[i]<<endl;
        }

    }

}

