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
            double ox,oy,ax,ay,bx,by;
            scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);
            double sqoa=(ox-ax)*(ox-ax)+(oy-ay)*(oy-ay);
            double r=sqrt(sqoa);
            double a=sqrt(ax*ax+ay*ay);
            double b=sqrt(bx*bx+by*by);
            double dot=ax*bx+ay*by;
            double theta=acos(dot/(a*b));
            double res;
            if(theta>180)
            {
                res=r*(180-theta);
            }
            else{
                res=r*theta;
            }
            cout<<"thra"<<dot/(a*b)<<theta<<endl;

        }

    }

}

