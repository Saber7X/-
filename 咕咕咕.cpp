#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	int sum=0;
	int cnt=1;
	int t=0;
	int num[100];
	scanf("%d %d",&n,&k);//n
	for(int i=0;i<n;i++)
	{
		t=0;
		scanf("%d",&num[i]);
		for(int j=0;j<i;j++)
		{
			if(num[i]<=num[j])
			{
				t=1;
				break;
			}
		}
		if(t==0&&i!=0)
		{
			cnt++;
		}
		//printf("%d %d\n",t,cnt);
	}
	if(cnt>k)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}
