#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//Ҫת�Ľ���
	int a;//ԭ���֣���ʮ���ƣ�
	int b=0;//������¼ת������� 
	cin>>a; 
	int jinwei=1;//�˷� 
	while(a>0) //תʮ���� 
	{
		b=b+a%10*jinwei;
		a/=10;
		jinwei*=n; 
	}
	int c[100];
	int cnt=0;
	while(b>=0)
	{
		c[cnt++]=b%n;
		b/=n;
	} 
	for(int i=cnt-1;i>=0;i--)
	{
		cout<<c[i];
	}
	
	return 0;
}
