#include<bits/stdc++.h>
using namespace std;
struct{
	
	int a;//��� 
	char b[100];//������Ϣ 
}num[1005];
int main()
{
	int n;//��¼����
	int ans[10006];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %s",&num[i].a ,&num[i].b);
	}
	int m;
	scanf("%d",m);
	for(int i=0;i<m;i++)
	{
		scanf("%",&ans[i]);
	}
	int t=0;
	for(int i=0;i<m;i++)
	{
		t=0;
		for(int j=0;j<n;j++)
		{
			if(ans[i]==num[i].a)
			{
				t=1;
				printf("%s\n",num[i].b);
			}
		}
		if(t==0)
		{
			printf("No Answer!\n");
		}
	}
	
	return 0;
}
