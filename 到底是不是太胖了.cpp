#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,h[100],w[100];
	int i,j,k;
	
	scanf("%lf",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&h[i],&w[i]);
		//printf("%lf %lf",h[i],w[i]);
	}
	for(i=0;i<n;i++)
	{
		double t=(h[i]-100)*0.9*2;//标准体重(市斤）
		double c=t*0.1;//标准体重 *0.1
		double s=abs(w[i]-t);//| 真实体重-标准体重 |
		if(s<c) 
		{
			printf("You are wan mei!\n");
		}
		else if(w[i]-t>0)
		{
			printf("You are tai pang le!\n");
		 } 
		else if(w[i]-t<0)
		{
			printf("You are tai shou le!\n");
		 } 
	}
	return 0;
}
