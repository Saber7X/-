			//纯代码 
//#include<bits/stdc++.h>
//using namespace std;
//const int N=105;
//
//int main() 
//{
//	int n,m;
//	int f[N][N]={0};
//	int v[N];
//	int w[N];
//	cin>>n>>m;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>v[i]>>w[i];
//	}
//	
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=0;j<=m;j++)
//		{
//			f[i][j]=f[i-1][j];
//			if(j>=v[i])
//			{
//				f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
//			}
//		}
//	}
//	cout<<f[n][m];
//	
//	return 0;
//}
		//注释版 
/*#include<bits/stdc++.h>
using namespace std;
int f[1005][1005];
int v[1005];//体积 
int w[1005];//价值
 
int main()
{
	
	int n,m;//n个物品，m是体积 
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	 } 
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=0;j<=m;j++)
	 	{
	 		f[i][j]=f[i-1][j];
	 		printf("i(用前i个物品)为%d   j（可用体积）为%d   前一个价值%d \n",i,j,f[i][j]); 
	 		if(j>=v[i])//当前可用体积大于物品的体积 （就是可以放得下的时候进行比较） 
	 		{
	 			f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
	 			printf("变化了 ");
			 	//printf("变化后价值为%d\n",f[i][j]); 
			}
			printf("当前的价值%d\n",f[i][j]); 

			 
		 }
	 }
	 cout<<f[n][m];
	return 0;
}*/
			//一维版
#include<bits/stdc++.h>
using namespace std;
const int N=1005;

int main() 
{
	int n,m;
	int f[N]={0};
	int v[N];
	int w[N];
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>v[i] >>w[i];
	}
	
	for(int i=1;i<=n;i++)
	{//因为反过来，当前值还没有更新，所以f[j] 是用i-1 个物品时体积不超过j的最大价值 
		for(int j=m;j>=v[i];j--)
		{
			f[j]=max(f[j],f[j-v[i]]+w[i]);
		}
	}
	cout<<f[m];
	return 0;
}
