#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,m,k,r;//n��ϲ������Ŀ��m����ҵ��Ŀ����ҵk�ּ���ʱ��Ϊr 
	cin>>n>>m>>k>>r;
	int a[200];// n��ϲ������Ŀ����Ҫ��ʱ��
	int b[200];//ÿ����ҵ��ʱ�� 
	int c[200];//ÿ����ҵ�ķ�ֵ
	int f[200]={0};
	 
	for(int i=1;i<=n;i++)// ϲ������Ŀ����Ҫ��ʱ��
	{
		cin>>a[i]; 
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++) //ÿ����ҵ��ʱ�� 
	{
		cin>>b[i];
	} 
	for(int i=1;i<=m;i++)//ÿ����ҵ�ķ�ֵ
	{
	 	cin>>c[i];
	}
	for(int i=1;i<=m;i++)//���� 
	{
	 	for(int j=k;j>=c[i];j--)//����
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
