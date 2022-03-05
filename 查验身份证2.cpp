#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char z[]={'1','0','X','9','8','7','6','5','4','3','2'};
	char b[18];int t=0;
	int n;
	int s=0;
	scanf("%d",&n);
	int i,j,k;
	getchar();
	for(i=0;i<n;i++)
	{
		
		scanf("%s",&b[i]);
	}
		int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=16;j++)
		{
			sum+=(b[j]-'0')*a[j];//每位乘权重 
			if(b[j]<'0'||b[j]>'9')//判断是否含字母 
			{
				t=1;
			}
		}
		int anx=sum%11;
		if(z[anx]!=b[17]||t!=1)
		{
			s++;
			printf("%s\n",b[i]);
		}
		if(s==0)
		{
			printf("All passed\n");
		}
		
	}
	return 0;
 } 
