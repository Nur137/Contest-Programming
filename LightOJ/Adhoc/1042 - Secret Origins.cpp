


#include<bits/stdc++.h>
using namespace std;

int pow(int base,int p)
{
    int res=1;
    for(int i=0;i<p;i++)
    res*=base;
    return res;
}


int bin_to_int(string num)
{
    int s=num.size(),sum=0;
    for(int i=0;i<s;i++)
    {
        sum+=(num[i]-'0')*pow(2,i);
    }
    return sum;
}

string func(int num)
{
    string res="";
    while(num!=0)
    {
        res+=(num%2)+'0';
        num/=2;
    }
    res+='0';

    int flag=0,val=0;

    for(int i=0;i<res.size();i++)
    {
        if(flag>0 && res[i]=='0'){val=i;break;}
        if(res[i]=='1')flag++;

    }

    string act;
    for(int i=0;i<flag-1;i++)act+="1";
    for(int i=flag-1;i<val-1;i++)act+="0";
    act+="01";
    for(int i=val+1;i<res.size();i++)act+=res[i];
    return act;
}
int main()
{
    int test;
    while(scanf("%d",&test)!=EOF)
    {
        int cas=1;
        while(test--)
        {
            int num,val;
            scanf("%d", &num);
            printf("Case %d: %d\n",cas++,bin_to_int(func(num)));
        }
    }
}
