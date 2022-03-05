#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num[100];
	int cnt=0;
	while(n!=1)
	{
		if(n%2==0)
		{
			n/=2;
			num[cnt++]=n;
		}
		else if(n%2!=0)
		{
			n=n*3+1;
			num[cnt++]=n;
		}
	}
	sort(num,num+cnt);
	cout<<num[cnt-1];
	return 0;
}
