#include<bits/stdc++.h>
using namespace std;
struct name{
	int tou;
	int wei;
}num[105];
bool cmp(name a,name b)
{
	return a.wei <b.wei ; 
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a,b;
		int cnt=0;
		if(n==0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&num[i].tou,&num[i].wei );
		}
		printf("\n");
		sort(num,num+n,cmp);
		for(int i=0;i<n;i++)
		{
			printf("%d %d\n",num[i].tou,num[i].wei );
		}
		cnt=1;
		b=num[0].wei;
		for(int i=1;i<n;i++)
		{
			if(num[i].tou>=b)
			{
				b=num[i].wei;
				cnt++;
			}
		}
		//printf("%d\n",cnt);
		
	}
	return 0;
}
