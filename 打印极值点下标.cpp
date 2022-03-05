#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//ÑùÀýÊý
	while(scanf("%d",&n)!=EOF)
	{
		while(n!=0)
		{
			bool t=0;
			int m;
			int cnt=0;
			int num[100];
			scanf("%d",&m);
			for(int i=0;i<m;i++)
			{
				scanf("%d",&num[i]);
			}
			
			int ans[100]={0};
			for(int i=0;i<m;i++)
			{
				if(i==0&&num[0]!=num[1])
				{
					t=1;
					ans[0]=0;
					cnt++;
				}
				else if(i==m-1&&num[m-1]!=num[m-2])
				{
					t=1;
					ans[cnt]=m-1;
					cnt++;
				}
				else if((i!=m-1)&&(i!=0)&&(num[i]<num[i-1]&&num[i]<num[i+1])||(num[i]>num[i-1]&&num[i]>num[i+1]))
				{
					t=1;
					ans[cnt]=i;
					cnt++;
				}
				
			}
			if(t==1)
			{
				for(int i=0;i<cnt;i++)
				{
					printf("%d",ans[i]);
					if(i!=cnt-1)
					{
						printf(" ");
					}
				}
				if(n!=0)
				{
					printf("\n");
				}
			}
			n--;
		} 
	}
	return 0;
}	
	
	
		
