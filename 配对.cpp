#include<stdio.h>
#include<math.h>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int sum=0;
	int i;
	scanf("%d",&n);
	int g[n];
	int b[n]; 
	for(i=0;i<n;i++)
	{
		scanf("%d",&g[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(g,g+n);
	sort(b,b+n);
	for(i=0;i<n;i++)
	{
		sum+=abs(g[i]-b[i]);
	}
	printf("%d",sum);
	return 0;
}
