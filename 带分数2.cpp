#include<bits/stdc++.h>
using namespace std;
int n;//Ҫ�ҵ����Ľ�� 
int ans[15];//�����洢����õ���
bool res[15]={0};//������¼״̬ 
//�ֶ���� 
int calc(int l,int r)
{
	int sum=0;
	for(int i=l;i<=r;i++)
	{
		sum=sum*10+ans[i];
	 } 
	 return sum;
}
int cnt=0;


void dfs(int u)
{
	if(u>9)
	{
		for(int i=1;i<=7;i++)//С��7����Ϊ����������λ���������ķ���
		{
			for(int j=i+1;j<=8;j++)//�ڶ������͵������� ��9�������һλ�� 
			{
				int a=calc(1,i);//1
				int b=calc(i+1,j);//2 
				int c=calc(j+1,9);//������ 
				if(a*c+b==n*c)//a+b/c==n�ı�ʽ���ܱ��������������� 
				{
					cnt++;
				}
			}
		} 
		return;
	}
			for(int i=1;i<=9;i++)
			{
				if(res[i]==0)
				{
					ans[u]=i;//u�������±� 
					res[i]=1;//i���Ǹ���
					dfs(u+1);//ȥ����һ����
					res[i]=0;//���غ�ظ��ֳ� 
				}
			 } 
			
		 
	
 } 

int main()
{
	scanf("%d",&n);
	dfs(1);
	cout<<cnt; 
	return 0;
}
