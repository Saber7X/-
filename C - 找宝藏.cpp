#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x;
	long long int y=0;
	long long int a;
	char b,c;
	map<char,long long int> num; 
	while(cin>>a>>b>>c)
	{
		
		num[b]+=a;
		if(c=='.')
		{
			break;
		}
		
	}
	
	long long int sum=abs(num['N']-num['S'])+abs(num['E']-num['W']);
	cout<<sum;
	return 0;
}
