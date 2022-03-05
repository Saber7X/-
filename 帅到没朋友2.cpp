//输入x,num[x]++;.（判断a是否出现过时就判断num[a]是否等于0； ） 
//然后用一个数组存入待查询的数组
//然后遍历待查询数组，判断数值作为第一步数组的下标时，判断第一步数组是否等于0；
//如果等于0，则输出这个数，如果不等于0，则输出 No one is handsome
//特判情况1：一个人在自己的朋友圈中只出现过一次 if( m==1) gu[x]==1;num[x]++;    if(num[x]==0||num[x]==1&&gu[x]==1;
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//朋友圈数
	int m;//每个朋友圈的人数
	int a[100000];//={0};//用来记录出现的次数
	int b[100000];//={0};//用来存储待查询的id
	int gu[100000];//={0};
	int i,j,k;
	int c;int o=1;
	int x;//用来暂存 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&x);
			if(m==1) gu[x]++;
			a[x]++;
			//printf("%lld\n",a[x]);
		}
	  
	}
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<c;i++)
	{
		//printf("%lld ",b[i]);
		if(a[b[i]]==0||(a[b[i]]==1&&gu[b[i]]==1))
		{
			printf("%05d",b[i]);
			if(i!=c-2)
			{
				printf(" ");
			}
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
