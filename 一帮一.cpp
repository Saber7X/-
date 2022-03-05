//结构体
#include<bits/stdc++.h>
struct num{
	int x;//性别
	char y[11];//名字 
}put[55];
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&put[i].x,&put[i].y);
	}
	for(i=0;i<n;i++)
	{
		//printf("%d %s\n",put[i].x,put[i].y);
	}
	for(i=0;i<n/2;i++)
	{
		if(put[i].x==0)
		{
			printf("%s",put[i].y);
			put[i].x+=3;
		}
		for(int j=n-1;j>n/2;j--)
		{
			if(put[j].x==1)				
			{
				printf(" %s",put[i].y);
				put[j].x+=3;
			}
		}
		printf("\n");
	}
	return 0;
 } 
