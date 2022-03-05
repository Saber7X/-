#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,m;
    while(scanf("%lld",&m)!=EOF)
    {
        scanf("%d %d",&a,&b);
		if(m==0) break;
        long int num[100866];
        long int cnt=0; 
        long int x=a+b;
        if(x==0)
        {
            printf("0\n");
            
        }
        else
		{
			while(x!=0)
        {
            num[cnt]=x%m;
            cnt++;
            x/=m;
        }
        for(int i=cnt-1;i>=0;i--)
        {
            printf("%lld",num[i]);
        }
        printf("\n");
		}
    }
    return 0;
}
