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
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;//���������
	int v[1005]={0};//���
	int w[1005]={0};//��ֵ
	int f[105][105]={0};
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			f[i][j]=f[i-1][j];//����i
			if(j>=v[i])
			{
				f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]); 
			}
			
		}
	}
	cout<<f[n][m];
	return 0;
}
