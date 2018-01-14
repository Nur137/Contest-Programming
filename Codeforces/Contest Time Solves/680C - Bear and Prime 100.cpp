#include<bits/stdc++.h>
using namespace std;
int A[20]= {2, 3, 5, 7,4,9,25,49, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int B[20];

int main()
{
    string X,Y;
    int i,j;
    for(j=0; j<20; j++)B[j]=0;

    for(i=0; i<19; i++)
    {
        cout<<A[i]<<endl;
        cin>>X;

        if(X=="yes")
        {
            B[i]=1;
        }
    }
    int cnt=0;

    for(j=0; j<20; j++)
    {
        if(B[j]==1)cnt++;
    }
    if(cnt>=2)cout<<"composite"<<endl;
    else cout<<"prime"<<endl;
    fflush(stdout);
}
