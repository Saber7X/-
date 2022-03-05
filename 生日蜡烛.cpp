#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=236;
	int a=1;
	int cnt=0;
	while(n>0)
	{
		n-=a;
		cnt++;
		a+=1;
	}
	printf("%d",cnt);
	return 0;
} 
