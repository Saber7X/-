#include<bits/stdc++.h>
using namespace std;
int const N=100010;
int w[N],h[N];
int n,k;
bool chack(int a)
{
    int num=0;
    for(int i=0;i<n;i++)
    {
        num+=(w[i]/a)*(h[i]/a);
        if(num>=k)
        {
            return true;
        }
    }
    return false;
}
int main()
{
	int l,r;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>w[i];
    }
    while(l<r)
    {
        int mid=l+(r-l+1>>1);
        if(chack(mid))
        {
            l=mid;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<r;
    return 0;
}
