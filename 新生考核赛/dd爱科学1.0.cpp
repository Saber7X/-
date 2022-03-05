#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	string s;
	cin>>n>>s;
	int x;
	long long int cnt=0;
	for(int i=1;i<n;i++)
	{
		if(s[i]<s[i-1])
		{	cnt++;
			for(int j=i+1;j<n;j++)
			{
				if(s[j]>=s[i-1])
				{
					i=j;
					break;
				}
				cnt++;
			}
		}
	}
//	cout<<cnt<<" ";
//	cout<<endl;
	
	cout<<min(n-cnt,cnt);
	return 0;
}
