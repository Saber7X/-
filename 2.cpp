#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	long long int res;
	scanf("%lld",&n);
	vector<int> num;
	while(n--)
	{
		char a;
		long long int b;
		scanf("%c %lld",&a,&b);
		if(a=='R')
		{
			num.push_back(b);
		}	
		else if(a=='L')
		{
			num.insert(num.begin()+0,b);
		}
		else if(a=='?')
		{
			long long int cnta=0;
			long long int cntb=0;
			for(long long int i=0;i<num.size();i++)
			{
				if(num[i]==b)
				{
					break;
				}
				cnta++;
			}
			cntb=num.size()-cnta-1;
			int cnt=min(cnta,cntb);
			printf("%lld\n",cnt);
		}
	}
	return 0;
}
