//����x,num[x]++;.���ж�a�Ƿ���ֹ�ʱ���ж�num[a]�Ƿ����0�� �� 
//Ȼ����һ������������ѯ������
//Ȼ���������ѯ���飬�ж���ֵ��Ϊ��һ��������±�ʱ���жϵ�һ�������Ƿ����0��
//�������0�����������������������0������� No one is handsome
//�������1��һ�������Լ�������Ȧ��ֻ���ֹ�һ�� if( m==1) gu[x]==1;num[x]++;    if(num[x]==0||num[x]==1&&gu[x]==1;
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;//����Ȧ��
	long long int m;//ÿ������Ȧ������
	long long int a[1000000];//={0};//������¼���ֵĴ���
	long long int b[1000000];//={0};//�����洢����ѯ��id
	long long int gu[1000000];//={0};
	long long int i,j,k;
	long long int c;long long int o=1;
	long long int x;//�����ݴ� 
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lld",&x);
			if(m==1) gu[x]++;
			a[x]++;
			//printf("%lld\n",a[x]);
		}
	  
	}
	scanf("%lld",&c);
	for(i=0;i<c;i++)
	{
		scanf("%lld",&b[i]);
	}
	for(i=0;i<c;i++)
	{
		//printf("%lld ",b[i]);
		if(a[b[i]]==0)
		{
			printf("%05lld",b[i]);
			if(i!=c-2)
			{
				printf(" ");
			}
			a[b[i]]+=1;
			o=0;
		}
		
		else if(gu[b[i]]==1&&a[b[i]]==1)
		{
			printf("%05lld",b[i]);
			/*if(i!=c-1)
			{
				printf(" ");
			}*/
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
