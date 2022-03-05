#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//要转的进制
	int a;//原数字（非十进制）
	int b=0;//用来记录转换后的数 
	cin>>a; 
	int jinwei=1;//乘方 
	while(a>0) //转十进制 
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
