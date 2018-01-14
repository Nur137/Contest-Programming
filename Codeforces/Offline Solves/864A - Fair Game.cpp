#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        set<int> cards;
        int arr[101];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cards.insert(x);
            arr[x]++;
        }
        if(cards.size()==2)
        {
            if(arr[*cards.begin()]==(n/2))
            {
                cout<<"YES"<<endl;
                cout<<*(cards.begin())<<" ";
                cout<<*(++cards.begin())<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
