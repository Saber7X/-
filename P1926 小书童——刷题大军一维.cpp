#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,m,k,r;//n道喜欢的题目，m项作业题目，作业k分及格，时间为r 
	cin>>n>>m>>k>>r;
	int a[200];// n道喜欢的题目所需要的时间
	int b[200];//每项作业的时间 
	int c[200];//每项作业的分值
	int f[200]={0};
	 
	for(int i=1;i<=n;i++)// 喜欢的题目所需要的时间
	{
		cin>>a[i]; 
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++) //每项作业的时间 
	{
		cin>>b[i];
	} 
	for(int i=1;i<=m;i++)//每项作业的分值
	{
	 	cin>>c[i];
	}
	for(int i=1;i<=m;i++)//个数 
	{
	 	for(int j=k;j>=c[i];j--)//分数
	 	{
	 		f[j]=f[j-c[i]]+b[i];
		}
	}
	
	r-=f[k];
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
	  	r-=a[i];
		if(r>=0)
		{
		  	cnt++;
		}
		else
		{
			cout<<cnt;
			break;
		}	
	}
	  
	  //cout<<r;
	  
	return 0;
}
