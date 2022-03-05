#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int a[15]={0};
	int b[15]={0};
	int c[15]={0};
	int f[1500]={0};//数组开小了！！！！！！！！！！！！！！！！！！！！！ 
	int n,m,k,r;
    cin>>n>>m>>k>>r;
    for(int i=1;i<=n;i++)//每道题的时间 
    {
        cin>>a[i];
    }
    
    sort(a+1,a+1+n);
    
    for(int i=1;i<=m;i++)//每门课的时间 
    {
        cin>>b[i];
    }
    
    for(int i=1;i<=m;i++)//每门课的分数 
    {
        cin>>c[i];
    }
    
    for(int i=1;i<=m;i++)
    {
    	for(int j=r;j>=b[i];j--)
    	{
    		f[j]=max(f[j],f[j-b[i]]+c[i]);
		}
	}
	
	int e=0;
	for(int i=1;i<=r;i++)
	{
		if(f[i]>=k)
		{
			e=r-i;
			break;
		}
		
	}
	int sum=0;
    for(int i=1;i<=n;i++)
    {
        e-=a[i];
        if(e>0)
        {
            sum++;
        }
		else
		{
            break;
        }
		
    }
    cout<<sum;
	return 0;
 } 
