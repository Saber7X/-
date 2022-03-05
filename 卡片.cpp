#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[10]={2021,2021,2021,2021,2021,2021,2021,2021,2021,2021};
	bool t=0;
	for(int i=0;i<4000;i++)
	{
		int x=i;
		while(x>0)
		{
			num[x%10]-=1;
			if(num[x%10]<0)
			{
				t=1;
				break;
			}
			x/=10;
		}
		if(t==1)
		{
			cout<<i-1;
			break;
		}
	}
	return 0;
}
