
//��ά����ѭ���� 
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
				//��Ϊ����ͬһ�㣬��ǰһ���Ƚ����Ժ�f[i,j],���бȽ� 
				f[i][j]=max(f[i][j],f[i-1][j-k*v[i]]+k*w[i]);
			}
		}
	}
	cout<<f[n][m];
	return 0;
}*/

//��ά����ѭ��
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
			//��Ϊ����ͬһ�㣬��ǰһ���Ƚ����Ժ�f[i,j],���бȽ� 
			//���Ż���������f[I,J] ��f[i,j-v]�ó� 
			//��ѡi����i-1,
			//ѡi���Ǻ�ͬһ��ǰ��ıȽϣ���ΪҪö�����������Ժ�ͬһ��ǰ�� �ıȽ� 
        	//���� f[i][j]=max(f[i-1][j],f[i][j-v[i]]+w[i]);
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

//һά����ѭ��
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
	 	for(int j=0;j<=m;j++)//��Ϊ�Ǻ�ͬһ���ǰһ���������� 
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

//һά����ѭ�� 
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
			//��һά����ѭ���� 
			if(j>=v[i])
			{
				f[j]=max(f[j],f[j-v[i]]+w[i]);
			}
			
		}
	}
	cout<<f[m];
	return 0;
}


