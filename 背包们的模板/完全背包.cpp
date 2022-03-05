
//二维三重循环版 
/*#include<bits/stdc++.h> 
using namespace std;
const int N=1005;

int main()
{
	int n,m;
	cin>>n>>m;
	int f[N][N]={0};
	int v[N];
	int w[N];
	
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			for(int k=0;k*v[i]<=j;k++)
			{
				//因为是在同一层，和前一个比较所以和f[i,j],进行比较 
				f[i][j]=max(f[i][j],f[i-1][j-k*v[i]]+k*w[i]);
			}
		}
	}
	cout<<f[n][m];
	return 0;
}*/

//二维两重循环
/* #include<bits/stdc++.h> 
using namespace std;
const int N=1005;

int main()
{
	int n,m;
	cin>>n>>m;
	int f[N][N]={0};
	int v[N];
	int w[N];
	
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			//因为是在同一层，和前一个比较所以和f[i,j],进行比较 
			//该优化根据推理f[I,J] 和f[i,j-v]得出 
			//不选i就是i-1,
			//选i就是和同一层前面的比较，因为要枚举数量，所以和同一层前面 的比较 
        	//方程 f[i][j]=max(f[i-1][j],f[i][j-v[i]]+w[i]);
			f[i][j]=f[i-1][j];
			if(j>=v[i]) 
			{
				f[i][j]=max(f[i][j],f[i][j-v[i]]+w[i]);
			}
			
		}
	}
	cout<<f[n][m];
	return 0;
}*/

//一维三重循环
/*#include<bits/stdc++.h> 
using namespace std;
const int N=1005;

int main()
{
	int f[N]={0};
	int v[N]={0};
	int w[N]={0};
	 int n,m;
	 cin>>n>>m;
	 for(int i=1;i<=n;i++)
	 {
	 	cin>>v[i]>>w[i];
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=0;j<=m;j++)//因为是和同一层的前一个比所以是 
	 	{
	 		for(int k=0;k*v[i]<=j;k++)
	 		{
	 			if(j>=v[i])
	 			{
	 				f[j]=max(f[j],f[j-k*v[i]]+w[i]*k);
				 }
			  	
			}
		}
	 }
	 cout<<f[m];
	return 0;
}*/

//一维两重循环 
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
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			//由一维三重循环得 
			if(j>=v[i])
			{
				f[j]=max(f[j],f[j-v[i]]+w[i]);
			}
			
		}
	}
	cout<<f[m];
	return 0;
}


