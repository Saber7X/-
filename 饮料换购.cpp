#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int b;
	int sum=n;
	while(n>=3)
	{
		sum=sum+n/3;
		n=n%3+n/3;
	}
	printf("%d",sum);
	return 0;
 } 
