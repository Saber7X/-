#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[100][100];
	int num2[100][100];
	int a,b,c,d;
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cin>>num[i][j];
		}
	}
	cin>>c>>d;
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<d;j++)
		{
			cin>>num2[i][j];
		}
	}
	int k;
	if(b==c)
	{
		int sum=0;
		cout<<a<<" "<<d<<endl;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<d;j++)
			{
				for(k=0;k<c;k++)
				{
					//���ɾ��ǳ˻�������a��d�У����Ծ���ĵ�n ��m�о��þ���A��n�е�ÿ�����˾���B��m�е�ÿ����Ȼ����ӣ���Ϊb==c����������� 
					sum+=num[i][k]*num2[k][j];
					//cout<<i<<" "<<k<<" "<<k<<" "<<j<<" "<<sum<<" "<<endl;
				}
				cout<<sum;
				if(j!=d-1)
				{
					cout<<" ";
				}
				sum=0; 
				
			}
			if(i!=a-1)
			{
				cout<<endl;
			}
			
		}
	}
	else
	{
		cout<<"Error: "<<b<<" != "<<c;
	}
	return 0;
}
