#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	int num[100002];
	int sum[100002]={0};
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
		sum[i]=sum[i-1]+num[i];
	}
	int a=1;
	int r,l;
	int cnt=-1;
	while(1)
	{
		int i,j;
		for(i=a,j=i+1;i<n,j<=n;i++,j++)
		{
			int summ=sum[j]-sum[i-1];
			if(abs(summ)>=m)
			{
				cnt=j-i;
				r=i,l=j;
				break;
				
			}
		}
		a++;
		if(a>=n)
		{
			break;
		}
	}
	cout<<r<<" "<<l;
	return 0;
}
