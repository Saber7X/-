#include<bits/stdc++.h>
using namespace std;
bool res[100]={0};//状态 
int ans[100];
int cnt=0;
void dfs(int u)
{
	if(u>9)
	{
		int a=ans[2];//分子 
		int b=ans[3];//分母 
		int c=ans[4]*100+ans[5]*10+ans[6];//分子 
		int d=ans[7]*100+ans[8]*10+ans[9];//分母 
		//int f=lcm(b,d);
		
		double sum=(double)((double)((double)(a*d+b*c)/(double)(b*d))+(double)ans[1]);
		
		
		if(sum==10.0)
		{
			cnt++;
			//	printf("%d ",cnt); 
				/*for(int i=1;i<=9;i++)
				{
					printf("%d ",ans[i]);
				}
				printf("\n");*/
		}
		//printf("\n");
		
	} 
	for(int i=1;i<=9;i++)
	{
	 	if(res[i]==0)
	 	{
	 		ans[u]=i;
	 		res[i]=1;
	 		dfs(u+1);
	 		res[i]=0;
		 }
	}
}
int main()
{
	dfs(1);
	cout<<cnt;
	return 0;
}
