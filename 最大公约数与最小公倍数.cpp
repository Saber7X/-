#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a=n,b=m; 
	while(b!=0)//շת����������Լ��������������0ʱ�������������Լ�� 
	{
		int c=a%b;
		a=b;
		b=c;
	}
	//printf("%d",a);���Լ��
	int sum=n/a*m+a;
	printf("%d",sum);
	return 0;
}

