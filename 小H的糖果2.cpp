#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n=1,k=1,sum=0,cnt=0;
        scanf("%lld %lld",&n,&k);
        if(k==1)
        {
            printf("%lld\n",n-1);
        }
        else
        {
            while(k>=n) 
            {
            	cnt+=k%n+1;
            	k/=n;
			}
            printf("%lld\n",cnt+k-1);
             
        }
         
    }
    return 0;
}
