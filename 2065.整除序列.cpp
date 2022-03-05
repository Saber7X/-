#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n; 
	cout<<n<<" ";
	while(1)
	{n/=2; 
		if(n==0)
		{
			break;
		}
		
		cout<<n<<" ";
	}
	return 0;
}
