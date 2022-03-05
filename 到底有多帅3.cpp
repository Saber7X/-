//输入x,num[x]++;.（判断a是否出现过时就判断num[a]是否等于0； ） 
//然后用一个数组存入待查询的数组
//然后遍历待查询数组，判断数值作为第一步数组的下标时，判断第一步数组是否等于0；
//如果等于0，则输出这个数，如果不等于0，则输出 No one is handsome
//特判情况1：一个人在自己的朋友圈中只出现过一次 if( m==1) gu[x]==1;num[x]++;    if(num[x]==0||num[x]==1&&gu[x]==1;
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;//朋友圈数
	long long int m;//每个朋友圈的人数
	long long int a[1000000];//={0};//用来记录出现的次数
	long long int b[1000000];//={0};//用来存储待查询的id
	long long int gu[1000000];//={0};
	long long int i,j,k;
	long long int c;long long int o=1;
	long long int x;//用来暂存 
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lld",&x);
			if(m==1) gu[x]++;
			a[x]++;
			//printf("%lld\n",a[x]);
		}
	  
	}
	scanf("%lld",&c);
	for(i=0;i<c;i++)
	{
		scanf("%lld",&b[i]);
	}
	for(i=0;i<c;i++)
	{
		//printf("%lld ",b[i]);
		if(a[b[i]]==0)
		{
			printf("%05lld",b[i]);
			if(i!=c-2)
			{
				printf(" ");
			}
			a[b[i]]+=1;
			o=0;
		}
		
		else if(gu[b[i]]==1&&a[b[i]]==1)
		{
			printf("%05lld",b[i]);
			/*if(i!=c-1)
			{
				printf(" ");
			}*/
			a[b[i]]+=1;
			o=0;
		}
		
	}
	if(o==1)
	{
		printf("No one is handsome");
	}

	return 0;
}
