#include<bits/stdc++.h>
using namespace std;
int n;
int f(int u)
{
	int m=sqrt(u);//�ҵ����е�����
	int sum=0;//��¼���� 
	for(int i=1;i<=m;i++)//��һ������ǰ�벿���ң�����ܱ���������ô˵������������ 
	{
		if(u%i==0) 
		{
			sum+=2;
		}
	
	}
	if(m*m==u)//�����������ͬ������ 
	{
		sum--;
	}
	return sum;
}


int main()

{
	
	cin>>n;
	for(int i=1;i<=1000005;i++)
	{
		if(f(i)==n)
		{
			cout<<i;
			break;//����ҵ��������� 
		}
	}
	return 0;
}
