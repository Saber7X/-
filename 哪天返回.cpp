#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0;
	int a=1;
	int cnt=0;
	while(sum<108)
	{
		sum+=a;
		a+=2;
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}
