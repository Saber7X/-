#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	
	while(n--)
	{
		long long int n,m,r,c;
		cin>>n>>m>>r>>c;
		long long int a=abs(1-r)+abs(1-c);
		long long int b=abs(n-r)+abs(1-c);
		long long int t=abs(1-r)+abs(m-c);
		long long int d=abs(n-r)+abs(m-c);
		cout<<max(a,max(b,max(t,d)))<<endl;
	}
	return 0;
}
