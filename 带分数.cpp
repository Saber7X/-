#include<bits/stdc++.h>
using namespace std;
int n;
int ans[15];
bool res[15]={0};
int cnt=0;
int calc(int l,int r)
{
	int sum=0;
	for(int i=l;i<=r;i++)
	{
		sum=sum*10+ans[i];
	}
	return sum;
 } 

void f(int u)
{
	//printf("\n%d \n",u);
	if(u>9)
	{
		//进行分段计算 
		for(int i=1;i<=7;i++)
		{
			
			for(int j=i+1;j<=8;j++)
			{
				int a=calc(1,i);
				int b=calc(i+1,j);
				int c=calc(j+1,9);
				if(a*c+b==c*n)//将除法两边同时*c，转成乘法 
				{
					cnt++;
				 } 
			}
		}
	}
	
	//搜索模板 
	for(int i=1;i<=9;i++)
	{
		if(res[i]==0)
		{
			ans[u]=i;//赋值 
			res[i]=1;//标记 
			f(u+1);//进入下一层 
			res[i]=0;//还原现场 
			
		}
	}
} 
int main()
{
	
	scanf("%d",&n);
	f(1);
	printf("%d",cnt);
	return 0;
 } 
 //https://www.acwing.com/solution/content/6724/
