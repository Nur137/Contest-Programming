#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    int i,f,s;
    while(cin>>A)
    {
    int ans=1,save=-1;
        s=A.size();
        f=0;
        for(i=0;i<s;i++)
        {
            if(A[i]=='A' ||A[i]=='E' ||A[i]=='I' ||A[i]=='O' ||A[i]=='U' ||A[i]=='Y' )
            {
                f=1;
                ans=max(ans,i-save);
                save=i;
            }
        }
                ans=max(ans,i-save);

        if(f==0)cout<<s+1<<endl;
        else
        cout<<ans<<endl;
    }
}
