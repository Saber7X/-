#include<stdio.h>
#include <algorithm>  
using namespace std; 
int main()
{
	int n;
	scanf("%d",&n);
	int num[100];
	int i=0,j,k;
	int mask=1;
	int t=n;
	int g=0;
	int o=0;
	int a[100];//ȥ�غ������ 
	while(t>0)
	{
		num[i]=t%10;
		t=t/10;
		i++;
	}
	sort(a,a+i);
	for(j=0;j<i;j++)
	{
		if(num[j]!=num[j+1])
		{
			a[g]=num[j+1];
			g++;
		}
	}
	
	for(j=0;j<g-1;j++)//����ȥ�غ�� a 
	{
		for(k=0;k<i;k++)//�����������ÿλ��num 
		{
			sort(a,a+i);
			if(a[j]==num[k])
			{
				
				o++; //���ڼ���ÿ���������� 
			}
		}
		printf("%d:%d\n",a[j],o);
		o=0;
	}
	return 0;
}	
	
	

