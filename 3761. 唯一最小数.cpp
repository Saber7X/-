#include<bits/stdc++.h>
using namespace std;
int num[200008];
int main()
{
    int t;
    
    scanf("%d", &t);
    
    while(t --)
    {
        unordered_map<int,int>m;
        int n;
        int minn=200008;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
            num[x]=i+1;
        }
        for(auto i:m)
        {
            if(i.second==1)
            {
                minn=min(minn,i.first);
            }
        }
        if(minn==200008)
        {
            cout<<"-1"<<endl;
        }else{
            cout<<num[minn]<<endl;
        }
    }
    return 0;
}
