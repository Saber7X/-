#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	int a,b; 
	int cntx=0,xnto=0;
	char qipan[4][4]={' '};
	//bool qwe[4][4]={-1};
	//boot t=0;
	scanf("%d",&t);//Æå¾ÖÊý 
	for(int i=0;i<t;i++)
	{
		t=0;
		scanf("%d",&n);
		if(n==0)
		{
			printf("-1");
			if(i!=t-1)
			{
				printf("\n");
			}
			continue;
		}
		for(int j=1;j<=n;j++)
		{
			
			scanf("%d %d",&a,&b);
			if(j%2==1)
			{
				qipan[a][b]='X';
			}
			if(j%2==0)
			{
				qipan[a][b]='O';
			}
			if(n!=0)
			{
				printf("X\n");
				break;
			}
		}
	}
	return 0;
}
