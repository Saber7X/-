#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=1;
	int n=1;
	int num[101];
	num[0]=1;
	int sum1=1;
	for(int i=2;i<=100;i++)
	{
		n+=1;
		sum+=n;
		sum1+=sum;
		printf("%d:%d\n",i,sum);
	}
	printf("%d",sum1);
	return 0;
}
