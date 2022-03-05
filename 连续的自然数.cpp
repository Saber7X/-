#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int num[200005];
	for(int i=1;i<=n+5;i++)
	{
		num[i]=i+num[i-1];
	}
	int l=0,r=1;
	while(1)
	{
		if(num[r]-num[l]>n)
		{
			l++;
		}
		if(num[r]-num[l]<n)
		{
			r++;
		}
		if(num[r]-num[l]==n)
		{
			printf("%d %d\n",l+1,r);
			l++;
			r++;
		} 
		if(r>n/2+1)
		{
			break;
		}
		
	}
	return 0;
}
