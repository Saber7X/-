#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
	
	if(n<=2)
	{
		return n;
	}
	else
	{
		return n*f(n-1);
	}
}
int main()
{
	int n=5;
	printf("%d",f(n));
	return 0; 
}
