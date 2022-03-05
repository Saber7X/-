#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a=n,b=m; 
	while(b!=0)//辗转相除法求最大公约数，当余数等于0时，除数就是最大公约数 
	{
		int c=a%b;
		a=b;
		b=c;
	}
	//printf("%d",a);最大公约数
	int sum=n/a*m+a;
	printf("%d",sum);
	return 0;
}

