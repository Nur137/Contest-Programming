#include<bits/stdc++.h>
using namespace std;

int main()
{
    string v1,v2;
    vector <string> result;
    cin>>v1>>v2;

    result.push_back(v1);
    result.push_back(v2);

    int n,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        if(a==v1)
        {
            result.push_back(v2);
            v1=v2;
        }
        else
        {
            result.push_back(v1);
        }
        result.push_back(b);
        v2=b;

    }

    //cout<<result.size()<<endl;

    for(i=0;i<result.size();i+=2)
    {
        cout<<result[i]<<" "<<result[i+1]<<endl;
    }
}
