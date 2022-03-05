#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	for(int i=1;i<=2021;i++)
	{
		int x=i;
		while(x>0)
		{
			if(x%10==6)
			{
				cnt++;
			}
			x/=10;
		}
	}
	printf("%d",cnt);
}
