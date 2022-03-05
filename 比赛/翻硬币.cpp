#include<bits/stdc++.h>
using namespace std;
char huan(char x)
{
	if(x=='*')
	{
		x='o';
	}
	else
	{
		x='*';
	}
	return x;
}
int main()
{
	string a,b;
	cin>>a;
	getchar();
	cin>>b;
	getchar();
	int cnt=0;
	int len=a.length();
	for(int i=0;i<len-1;i++)
	{
		if(a[i]!=b[i])
		{
			a[i]=huan(a[i]);
			a[i+1]=huan(a[i+1]);
			cnt++;
		}
	}
	if(a!=b)
	{
		printf("No Answer.");
	}
	if(a==b)
	{
		printf("%d",cnt);
	}
	return 0;
}
