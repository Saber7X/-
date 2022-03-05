#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",n);
	int num[10];//肇定 
	int ans[10];//書定 
	string x;
	int v=0,sum=0;
	for(int i=0;i<n;i++)//肇定 
	{
		cin>>x;
		if(x=="XXXS")
		{
			num[0]++;
			v+=num[0];
		}
		if(x=="XXS")
		{
			num[1]++;
			v+=num[1];
		}
		if(x=="XS")
		{
			num[2]++;
			v+=num[2];
		}
		if(x=="S")
		{
			num[3]++;
			v+=num[3];
		}
		if(x=="M")
		{
			num[4]++;
			v+=num[4];
		}
		if(x=="L")
		{
			num[5]++;
			v+=num[5];
		}
		if(x=="XL")
		{
			num[6]++;
			v+=num[6];
		}
		if(x=="XXL")
		{
			num[7]++;
			v+=num[7];
		}
		if(x=="XXXL")
		{
			num[8]++;
			v+=num[8];
		}
		
	}
	for(int i=0;i<n;i++)//書定 
	{
		cin>>x;
		if(x=="XXXS")
		{
			ans[0]++;
			sum+=ans[0];
		}
		if(x=="XXS")
		{
			ans[1]++;
			sum+=ans[1];
		}
		if(x=="XS")
		{
			ans[2]++;
			sum+=ans[2];
		}
		if(x=="S")
		{
			ans[3]++;
			sum+=ans[3];
		}
		if(x=="M")
		{
			ans[4]++;
			sum+=ans[4];
		}
		if(x=="L")
		{
			ans[5]++;
			sum+=ans[5];
		}
		if(x=="XL")
		{
			ans[6]++;
			sum+=ans[6];
		}
		if(x=="XXL")
		{
			ans[7]++;
			sum+=ans[7];
		}
		if(x=="XXXL")
		{
			ans[8]++;
			sum+=ans[8];
		}
		
	}
	printf("%d",abs(sum-v));
	return 0;
 } 
