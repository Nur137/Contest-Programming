#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int n,m,i,x,y,j;
    while(cin>>n>>m)
    {

        set <long long int> row;
        set <long long int> col;
        vector<long long int > X;
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            row.insert(x);
            col.insert(y);
            long long int r=n-row.size();
            long long int c=n-col.size();
            //cout<<r*c<<endl;
            long long int q=r*c;
            X.push_back(q);


        }
        for(i=0;i<m-1;i++)
            cout<<X[i]<<" ";
            cout<<X[m-1]<<endl;

    }
}
