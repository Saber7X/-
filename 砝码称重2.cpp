#include<bits/stdc++.h>
using namespace std;
const int N=110,M=200010,B=M/2;
bool f[N][M]={0,0};
int main()
{
	int n;
	cin>>n;
	int num[100]={0};
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		sum+=num[i];
	}
	
	f[0][B]=1;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=-sum;j<=sum;j++)
		{
			f[i][j+B]=f[i-1][j+B];//�Ȳ��� 
			if(j-num[i]>=-sum)//����� 
			{
				if(f[i][j+B]==1||f[i-1][j-num[i]+B]==1)
				{
					f[i][j+B]=1;//ֻҪ��һ��Ϊ�ǿգ���ô��˵��������Ա��ճ��� 
				}
			}
			if(j+num[i]<=sum)//���ұ� 
			{
				if(f[i][j+B]==1||f[i-1][j+num[i]+B]==1)
				{
					f[i][j+B]=1;// 
				}
			}
		}
	}
	for(int i=1;i<=sum;i++)
	{
		if(f[n][i+B]==1)
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
 } 
