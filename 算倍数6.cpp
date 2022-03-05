#include<iostream>
using namespace std;
int main()
{
	
	int n,m;
	int cnt=0;
	cin >>n>>m; 
	for(int i=1;i<=n;i++)
	{
		if(m*i==m)
		{
			cnt+=1;
		}
	}

	cout <<cnt;
}
