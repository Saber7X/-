//#include<bits/stdc++.h>
//using namespace std;
//const int  N=105;
//
//int main()
//{
//	int n,m;
//	int v[N][N]={0};
//	int w[N][N]={0};
//	int f[N][N]={0};
//	int s[N];
//	cin>>n>>m;
//	
//	for(int i=1;i<=n;i++)
//	{
//		cin>>s[i];
//		for(int j=1;j<=s[i];j++)
//		{
//			cin>>v[i][j]>>w[i][j];
//		}
//	}
//	
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=0;j<=m;j++)
//		{
//			for(int k=0;k<=s[i];k++)
//			{
//				if(j>=v[i][k])
//				{
//					f[i][j]=max(f[i][j],f[i-1][j-v[i][k]]+w[i][k]);//����1����ȫ����������ÿ��ÿ�����嶼����ѡ��-1�ʹ���ÿ��ֻ��ѡһ����Ʒ 
//				}
//			}
//		}
//	}
//	cout<<f[n][m];
//	
//	return 0; 
//}

#include<bits/stdc++.h>
using namespace std;
const int N=105;
int f[N]={0};
int v[N]={0};
int w[N]={0};

int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		int s;
		
		
		cin>>s;
		for(int j=1;j<=s;j++)
		{
			cin>>v[j]>>w[j];//bug�����֮ǰд��v[i],w[i]�� 
			
		}
		for(int j=m;j>=0;j--)//ö����� 
		{
			for(int k=0;k<=s;k++)
			{
				if(v[k]<=j)
				{
					f[j]=max(f[j],f[j-v[k]]+w[k]);
				}
			 } 
		}
	 } 
	 cout<<f[m];
	return 0;
}
