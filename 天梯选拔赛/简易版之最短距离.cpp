#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a[501];//����λ�� 
	int b[501];//���ѵ�λ�� 
	int ans[501]={0}; 
	int x;int cnt=0;
	int c;int d;
	int a1=0,b1=0,c1=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)//�������� 
	{
		scanf("%d",&x);//�������� 
		for(int j=0;j<x;j++)
		{
			scanf("%d",&b[j]);//���ѵ�λ��
		}
		sort(b,b+x);
		d=b[x/2];
		for(int j=0;j<x;j++)
		{
			ans[cnt]+=abs(d-b[j]);
		}
		cnt++;
		
	 } 
	 for(int i=0;i<cnt;i++)
	 {
	 	printf("%d\n",ans[i]);
	 }

	return 0;
}

