//����x,num[x]++;.���ж�a�Ƿ���ֹ�ʱ���ж�num[a]�Ƿ����0�� �� 
//Ȼ����һ������������ѯ������
//Ȼ���������ѯ���飬�ж���ֵ��Ϊ��һ��������±�ʱ���жϵ�һ�������Ƿ����0��
//�������0�����������������������0������� No one is handsome
//�������1��һ�������Լ�������Ȧ��ֻ���ֹ�һ�� if( m==1) gu[x]==1;num[x]++;    if(num[x]==0||num[x]==1&&gu[x]==1;
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//����Ȧ��
	int m;//ÿ������Ȧ������
	int a[100000];//={0};//������¼���ֵĴ���
	int b[100000];//={0};//�����洢����ѯ��id
	int gu[100000];//={0};
	int i,j,k;
	int c;int o=1;
	int x;//�����ݴ� 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&x);
			if(m==1) gu[x]++;
			a[x]++;
			//printf("%lld\n",a[x]);
		}
	  
	}
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<c;i++)
	{
		//printf("%lld ",b[i]);
		if(a[b[i]]==0||(a[b[i]]==1&&gu[b[i]]==1))
		{
			printf("%05d",b[i]);
			if(i!=c-2)
			{
				printf(" ");
			}
			a[b[i]]+=1;
			o=0;
		}
		
	}
	if(o==1)
	{
		printf("No one is handsome");
	}

	return 0;
}
