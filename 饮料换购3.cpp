#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp=n;
	while(n>=3)
	{
		temp=temp+n/3;
		n=n%3+n/3;
	}
	cout<<temp;
	return 0;
}
