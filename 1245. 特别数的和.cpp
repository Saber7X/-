#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int sum=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x=i;
		while(x>0)
		{
			if(x%10==2||x%10==0||x%10==1||x%10==9)
			{
				sum+=i;
				break;
			}
			x/=10;
		}
	}
	cout<<sum;
	return 0;
}
