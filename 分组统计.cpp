#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;//������ 
	int n;//����ÿ�м����� 
	while(scanf("%d",&m))
	{
		int a[2100]={0},b[105]={0};
	int num[2100]={0};//����ȥ�� 
	int num1[2100]={0};//����ȥ�� 
	int c[2100]={0};//��¼ȥ�غ������
	int d[2100]={0};//��¼ȥ�غ����� 
	for(int i=0;i<m;i++)//�������� 
	{
		int cnt=0;
		int cnt1=0;
		scanf("%d",&n); 
		for(int k=0;k<n;k++)//ÿ��n���� 
		{
			scanf("%d",&a[k]);//���� 
			num[a[k]]++;
		}
		for(int e=0;e<n;e++)
		{
			scanf("%d",&b[e]);//��� 
			num1[b[e]]++;
		}
		for(int j=0;j<105;j++)//ȥ�� 
		{
			if(num[j]!=0)//���� 
			{
				c[cnt]=j;
				//printf("%d",c[cnt]);
				cnt++;
			} 
			if(num1[j]!=0)//��� 
			{
				d[cnt1]=j;
				//printf("%d",d[cnt1]);
				cnt1++;
			}
		}
		
		for(int j=0;j<cnt1;j++)//��� 
		{
			printf("%d={",d[j]);
			for(int k=0;k<cnt;k++)//���� 
			{
				int s=0;
				printf("%d=",c[k]);
				for(int l=0;l<n;l++)//ԭ���ݺ���� 
				{
					if(a[l]==c[k]&&b[l]==d[j])
					{
						s++;
					 } 
				}
				printf("%d",s);
				if(k!=cnt-1)
				{
					printf(",");
				}
			}
			printf("}\n");
		}
	}
	}
	
	return 0;
}
