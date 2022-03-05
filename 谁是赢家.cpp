#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p1,p2;//观众票
	int s[3];//评委票 
	scanf("%d %d",&p1,&p2);
	int n=0,m=0;//统计评委票 
	//printf("%d %d",p1,p2);
	//printf("%d %d %d",s1,s2,s3);
	for(int i=0;i<3;i++)
	{
		scanf("%d",&s[i]);
		if(s[i]==0)
		{
			n++;
		}
		else
		{
			m++;
		}
	}
	if(n==0)
	{
		printf("The winner is b: %d + 3",p2);
		
	}
	else if(m==0)
	{
		printf("The winner is a: %d + 3",p1);
		
	}
	else if(p1>p2&&n!=0)
	{
		printf("The winner is a: %d + %d",p1,n);
		
	}
	else if(p1<p2&&m!=0)
	{
		printf("The winner is b: %d + %d",p2,m);

	}
	return 0;
}
