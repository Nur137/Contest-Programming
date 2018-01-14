#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,i;
    while(cin>>a>>b>>c>>d>>e)
    {
        int B[110];
        for(i=0;i<110;i++)
            B[i]=0;

        int sum=a+b+c+d+e;
        int sum2=sum;
        vector<int> A;
        A.push_back(a);
        B[a]++;
        A.push_back(b);
        B[b]++;
        A.push_back(c);
        B[c]++;
        A.push_back(d);
        B[d]++;
        A.push_back(e);
        B[e]++;
        sort(A.begin(),A.end());
        for(i=0;i<5;i++)
        {

            if(B[A[i]]==2)
            {
                sum2=min(sum2,sum-2*A[i]);
            }
            else if(B[A[i]]>2)sum2=min(sum2,sum-3*A[i]);

        }
        cout<<sum2<<endl;
    }
}
