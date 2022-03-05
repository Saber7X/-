#include<bits/stdc++.h>
using namespace std;
struct mame{
	char name[100];
	int a;
	int ans;//每个人报的数与平均数一半的差 
}num[10000];
int main()
{
	int sum=0;
	int n;
	int i,j,k;
	int cnt=0;
	int m=100;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&num[i].name ,&num[i].a);
		sum+=num[i].a;
	}
	
	sum=sum/n/2;
	for(i=0;i<n;i++)
	{
		num[i].ans=abs(num[i].a-sum);
		if(num[i].ans<m)
		{
			cnt=i;
			m=num[i].ans;
		}
		
	}
	printf("%d %s",sum,num[cnt].name);
	return 0;
}
