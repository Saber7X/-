#include<bits/stdc++.h>
using namespace std;
int main()
{
	char n;
	int m;
	int t=0;
	while(cin>>n)
	{
		if(n=='.')
		{
			break;
		}
		cin>>m;
		if(t==1)
		{
			cout<<endl;
		}
		t=1;
		int b=(m*2-2)/2;//�м���εĳ� 
		if(b%2!=0)//����ż����-1 
		{
			b-=1;
		}
		int a=(m*2-2-b)/2;//�м���κ��������εľ���
		for(int i=1;i<=m;i++)//ö������ 
		{
			if(i==1||i==m)//��һ�л������һ�У����m*2���ַ� 
			{
				for(int j=1;j<=m*2;j++)
				{
					cout<<n;
				}
				cout<<endl;
			}
			else if(i==2||i==m-1)//�м���κ�����������¿յ�һ�� 
			{
				cout<<n;
				for(int j=2;j<=m*2-1;j++)
				{
					cout<<" ";
				}
				cout<<n<<endl;
			}
			else if(i>2&&i<m-1)//�м���� 
			{
				cout<<n;
				for(int j=1;j<=a;j++)//�ȴ�ӡ�м���ξ���������εĿո� 
				{
					cout<<" ";
				}
				for(int j=1;j<=b;j++)//�ٴ�ӡ�м���� 
				{
					cout<<n;
				}
				
				for(int j=1;j<=a;j++)//�ٴ�ӡ�м���ξ���������εĿո� 
				{
					cout<<" ";
				}
				cout<<n<<endl;
			}
			
		}
	}
	return 0;
}
