#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char b;int cnt=0;
	scanf("%d %c",&n,&b);
	int i,j,k;
	int sum;
	if(n==1)
	{
		printf("%c",b);
		return 0;
	}
	sum=n-1;
	for(i=3;i<=n;i+=2)
	{
		sum=sum-i*2;
		
		if(sum<0)
		{
			sum=sum+i*2; //sum������ˣ����ϱ�����Ŀɵ�ʣ�µģ� ��ʣ�µ��ַ��� 
			cnt=i-2;//��Ϊ�ַ���С����0������ 
			break;
		}
		else if(sum==0)
		{
			cnt=i;
			break;
		}
	}
	int x=0;
	while(cnt>=1)
	{
		for(i=0;i<x;i++)
		{
			printf(" "); 
		}
		x++;
		for(i=1;i<=cnt;i++)
		{
			printf("%c",b);
		}
	}
	x=cnt;
	return 0;
	
	
	
}

