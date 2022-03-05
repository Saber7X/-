#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int num[10005]={0};
	num[1]=1;
	num[2]=2;
	num[3]=5;
	for(int i=4;i<=1000;i++)
	{
		num[i]=num[i-1]*num[i-2]*num[i-3]+num[i-1]+num[i-2]+num[i-3];
		num[i]%=100000;
		
	}
	cout<<num[1000];
	return 0;
}
