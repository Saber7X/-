#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,t;//n��Ը������mԪ����ʣt����
	cin>>n>>m>>t;
	int f[105][105]={1000};
	int maxn=0;
	for(int i=1;i<=n;i++)
	{
	 	int t1,t2;//��Ǯ ��ʱ�� 
	 	cin>>t1>>t2; 
	 	for(int j=m;j>=t1;j--)//��Ǯ
	 	{
	 		for(int k=t;k>=t2;k--)//ʱ�� 
	 		{
	 			
	 			f[j][k]=max(f[j][k],f[j-t1][k-t2]+1);//��Ϊ�ǴӴ�С�����Ե�ǰֵ������һ���ģ�û�и��� 
			}
		}
	}
	cout<<f[m][t];
	return 0;
}
