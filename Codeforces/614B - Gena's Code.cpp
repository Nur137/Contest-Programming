#include<bits/stdc++.h>
using namespace std;

int s(string l)
{
    int i=1,d=l.size();
    if(l[0]=='1')
    {
        for(i; i<d; i++)
        {
            if(l[i]!='0')return 0;

        }
    }
    else return 0;
    return 1;
}

int main()
{
    int a,i,zero,f,r;
    string x;
    while(cin>>a)
    {

        string res;
        f=0;
        zero=0;
        r=0;
        for(i=0; i<a; i++)
        {

            cin>>x;
            //cout<<res<<"ghg"<<endl;
            if(x.size()==1)
            {
                if(x[0]=='0')
                {
                    f=1;
                    //      cout<<"zzz"<<endl;
                }
                else if(x[0]!='1')res=x;


            }
            else
            {
                //if(s(x)==0)r=1;
                if(s(x)==1)zero+=(x.size()-1);
                else
                {
                    res=x;
                    //cout<<res<<"qdsf"<<endl;
                }
                //cout<<s(x)<<"ds"<<endl;

            }

        }
        if(f==1)cout<<"0"<<endl;
        else
        {
            // if(r==0)res+='1';
            if(res.size()==0)res+='1';

            for(i=0; i<zero; i++)
                res+='0';
            cout<<res<<endl;
        }

    }
}
