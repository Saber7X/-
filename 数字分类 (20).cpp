#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1=0,a2=0,a3=0,a4=0,a5=0;
	int num1[1001]={0},num2[1001]={0},num3[1001]={0},num4[1001]={0},num5[1001]={0};
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x%5==0&&x%2==0)
		{
			num1[a1]=x;
			a1++;
		}
		if(x%5==1)
		{
			num1[a2]=x;
			a2++;
		}
		if(x%5==2)
		{
			a3++;
		}
		if(x%5==3)
		{
			num3[a4]=x;
			a4++;
		}
		if(x%5==4)
		{
			num4[a5]=x;
			a5++;
		}
	}
	
	if(a1==0)
	{
		printf("N ");
	}
	else
	{
		int sum=0;
		for(int i=0;i<a1;i++)
		{
			sum+=num1[i];
		}
		printf("%d ",sum);
	}
	
	if(a2==0)
	{
		printf("N ");
	}
	else
	{
		int sum=num2[0];
		for(int i=1;i<a2;i+=2)
		{
			sum-=num2[i];
			sum+=num2[i+1];
		}
		printf("%d ",sum);
	}
	
	if(a3==0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ",a3);
	}
	
	if(a4==0)
	{
		printf("N ");
	}
	else
	{
		double sum=0.0;
		for(int i=0;i<a4;i++)
		{
			sum+=num4[i];
		}
		sum/=a4*1.0;
		printf("%.1lf ",sum*1.0);
	}
	
	if(a5==0)
	{
		printf("N");
	}
	else
	{
		sort(num5,num5+a5);
		printf("%d",num5[a5-1]);
	}
	return 0;
 } 
