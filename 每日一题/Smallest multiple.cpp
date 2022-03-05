#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[100];
	int a=1;
	/*for(int i=0;i<=19;i++)
	{
		num[i]=a;
		a++;
	}*/
	for(long long int i=1;i<=11111000000;i++)
	{
		//cout<<i;
		bool t=0;
		for(int j=1;j<=20;j++)
		{
			if(i%j!=0)
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
//232792560
