#include <stdio.h>
using namespace std;
int main ()
{
	int n;
	long long z=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		z*=2;
	}
	printf("%lld",z);
	return 0;
}

