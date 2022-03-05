#include<bits/stdc++.h>
using namespace std;

int fbs(int n)
{
	if(n<=2)
	{
		return 1;
	}
	return fbs(n-1)+fbs(n-2);
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fbs(n));
	return 0;
	
}
