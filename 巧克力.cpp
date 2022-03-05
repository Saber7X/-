#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    long long int chang[100005];
    long long int kuan[100005];
    long long int num[100005];
    int cnt=0;
    scanf("%lld %lld",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&chang[i],&kuan[i]);
        num[cnt]=chang[i];
        cnt++;
        num[cnt]=kuan[i];
        cnt++;
    }
    sort(num,num+cnt);
    long long int a=1;
    long long int m=num[0];//±ß³¤
    long long int sum=0;//¿éÊý
    bool t=2;
    while(1)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            
            sum=sum+(chang[i]/m)*(kuan[i]/m);
                
            
        }
        if(sum==k)
        {
            break;
        }
        if(sum<k)
        {
            
			if(t==1)
            {
                m--;
                break;
            }
            m--;
            t=0;
            
        }
        if(sum>k)
        {
            if(t==0)
            {
                m++;
                break;
            }
            t=1;
            m++;
        }
        
    }
    printf("%lld",m);
    return 0;
}
