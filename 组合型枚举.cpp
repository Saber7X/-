//��������ֵ���С����ǰ��
/* 
#include<bits/stdc++.h>
using namespace std;
int n,m;//��Χ��λ�� 
int res[100]={0};
int ans[100];

void dfs(int u)
{
	if(u>m)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++)//��Ϊ�����ֵ�������ֻҪ��һ��ʼ����û�ù��ľͺ��� 
	{
		if(res[i]==0)
		{
			ans[u]=i;
			res[i]=1;
			dfs(u+1);
			res[i]=0;
		}
	}
}

int main()
{
	cin>>n>>m;
	dfs(1);
	return 0;
}
*/

//���ֵ������� 
#include<bits/stdc++.h>
using namespace std;
int n,m;//��Χ��λ�� 
int res[100]={0};
int ans[100]={1};//��Ϊ�Ǵ�1��ʼ�����Զ���ֵΪ1�� 

void dfs(int u)
{
	
	if(u>m)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;return;
	 }
	
		
	//ģ�� 
	for(int i=ans[u-1];i<=n;i++)//��ΪҪ���ֵ������Դ���һ���ù�������ʼ���� 
	{
		if(res[i]==0)
		{
			ans[u]=i;
			res[i]=1;
			dfs(u+1);
			res[i]=0;
		}
	}
	
}

int main()
{
	cin>>n>>m;
	dfs(1);
	return 0;
}
