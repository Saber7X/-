#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char z[17]={'1','0','X','9','8','7','6','5','4','3','2'};
	char b[18];int t=0;
	int n;
	int s=0;
	scanf("%d",&n);
	int i,j,k;
	
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s",&b);
		int sum=0;
		for(j=0;j<17;j++)
		{
			sum+=(b[j]-'0')*a[j];
			if(b[j]>='0'&&b[j]<='9')//ÅÐ¶ÏÊÇ·ñº¬×ÖÄ¸ 
			{
				t=1;
			}
		}
		int anx=sum%11;
		if(z[anx]!=b[17]||t!=1)
		{
			s++;
			printf("%s\n",b);
		}
		if(s==0)
		{
			printf("All passed");
		}
		
	}
	return 0;
 } 
