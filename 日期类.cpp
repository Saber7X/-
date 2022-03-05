#include<bits/stdc++.h>
using namespace std;
int main()
{
	//int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
	scanf("%d",&n);
	int ans[1000];
	int y,m,d;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		int t=0;
		scanf("%d %d %d",&y,&m,&d);
		if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d==31)
		{
			t=1;
			d=1;
			m++;
		}
		else if((m==4||m==6||m==9||m==11)&&d==30)
		{
			t=1;
			d=1;
			m++;
		}
		else if(m==2&&d==28)
		{
			t=1;
			d=1;
			m++;
			
		}
		else
		{
			d++;
		}
		if(t==1&&m==13)
		{
			m=1;
			y++; 
		}
		ans[cnt]=y;
		cnt++;
		ans[cnt]=m;
		cnt++;
		ans[cnt]=d;
		cnt++;
	}
	int c=0;
	for(int i=0;i<cnt;i++)
	{
		
		printf("%02d",ans[i]);
		c++;
		if(c==3)
		{
			c=0;
			printf("\n");
		}
		else
		{
			printf("-");
		}
		
	}
	
	return 0;
 } 
