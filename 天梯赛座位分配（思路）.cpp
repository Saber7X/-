/*//��ά����
struct{
	int num[105];//���
	int sum;	//renshu 
}x[105]; 
//����
if(u<x[i].sum )
//ѧУ������1��+=2��
//ֻ��һ��ʱ�������Ե�1�� */
#include<bits/stdc++.h>
struct name{
	int num[105];
	int sum;
}x[105];
using namespace std;
int main;
{
	int n;
	int bianhao=1;
	scanf("%d",&n);
	int m[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	while(1)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<=m[i])
			{
				x[i].num=bianhao;
				bianhao++;
			}
			
		}
	}
}
