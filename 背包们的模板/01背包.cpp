			//������ 
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
		//ע�Ͱ� 
/*#include<bits/stdc++.h>
using namespace std;
int f[1005][1005];
int v[1005];//��� 
int w[1005];//��ֵ
 
int main()
{
	
	int n,m;//n����Ʒ��m����� 
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
	 		printf("i(��ǰi����Ʒ)Ϊ%d   j�����������Ϊ%d   ǰһ����ֵ%d \n",i,j,f[i][j]); 
	 		if(j>=v[i])//��ǰ�������������Ʒ����� �����ǿ��Էŵ��µ�ʱ����бȽϣ� 
	 		{
	 			f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
	 			printf("�仯�� ");
			 	//printf("�仯���ֵΪ%d\n",f[i][j]); 
			}
			printf("��ǰ�ļ�ֵ%d\n",f[i][j]); 

			 
		 }
	 }
	 cout<<f[n][m];
	return 0;
}*/
			//һά��
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
	{//��Ϊ����������ǰֵ��û�и��£�����f[j] ����i-1 ����Ʒʱ���������j������ֵ 
		for(int j=m;j>=v[i];j--)
		{
			f[j]=max(f[j],f[j-v[i]]+w[i]);
		}
	}
	cout<<f[m];
	return 0;
}
