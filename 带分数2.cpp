#include<bits/stdc++.h>
using namespace std;
int n;//要找的数的结果 
int ans[15];//用来存储排序好的数
bool res[15]={0};//用来记录状态 
//分段求和 
int calc(int l,int r)
{
	int sum=0;
	for(int i=l;i<=r;i++)
	{
		sum=sum*10+ans[i];
	 } 
	 return sum;
}
int cnt=0;


void dfs(int u)
{
	if(u>9)
	{
		for(int i=1;i<=7;i++)//小于7是因为必须留下两位数组成下面的分数
		{
			for(int j=i+1;j<=8;j++)//第二段数和第三段数 ，9留给最后一位数 
			{
				int a=calc(1,i);//1
				int b=calc(i+1,j);//2 
				int c=calc(j+1,9);//第三段 
				if(a*c+b==n*c)//a+b/c==n的变式，能避免遇到除法问题 
				{
					cnt++;
				}
			}
		} 
		return;
	}
			for(int i=1;i<=9;i++)
			{
				if(res[i]==0)
				{
					ans[u]=i;//u是数组下标 
					res[i]=1;//i是那个数
					dfs(u+1);//去找下一个数
					res[i]=0;//返回后回复现场 
				}
			 } 
			
		 
	
 } 

int main()
{
	scanf("%d",&n);
	dfs(1);
	cout<<cnt; 
	return 0;
}
