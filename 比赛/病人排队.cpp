#include<bits/stdc++.h>
using namespace std;
struct name{
	int a;//编号 
	int b;//年龄 
	int c;//与101的差值； 
}num[106];
int main()
{
	int n;//人数;
	int cnt=0;
	scanf("%d",&n);
	int ans[106];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&num[i].a ,&num[i].b);
		num[i].c =101-num[i].b;
		if(num[i].b>=60)
		{
			ans[cnt]=num[i].c;
			cnt++;
		}
	} 
	
	sort(ans,ans+cnt);
	for(int i=0;i<cnt;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ans[i]==num[j].c)
			{
				printf("%06d\n",num[j].a);
				num[j].b-=1000;
				num[j].c-=1000;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(num[i].b >0)
		{
			printf("%06d\n",num[i].a);
		}
	}
	return 0;
}
//int ans1[100];
/*for(int i=0;i<cnt;i++)
	{
		printf("%d\n",ans[i]);
	}*/
/*for(int i=0;i<n;i++)
	{
		if(num[i].b>=60)
		{
			ans[cnt]=num[i].b;
			cnt++; 
			//printf("%d\n",ans[cnt-1]);
		}
		
	}
	sort(ans,ans+cnt);
	for(int i=0;i<cnt;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ans[i]==num[j].b)
			{
				printf("%d\n",num[i].a);
				//num[j].b-=100;
			}
		}
	}*/
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<cnt;j++)
		{
			if(num[i].a!=ans[j])
			{
				printf("%d\n",num[i].a);
			}
		 } 
	}*/
