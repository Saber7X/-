#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num[10086];
	int cnt=0;
	int i,j=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]%2!=0)
		{
			j++;
		}
		else if(num[i]%2==0)
		{
			k++;
		}
	}
	printf("%d %d",j,k);
	return 0;
}
