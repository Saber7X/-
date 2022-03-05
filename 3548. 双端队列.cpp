#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
	long long int n;
	scanf("%lld",&n);
	vector<int> num;
	while(n--)
	{
		char a[2];
		long long int b;
		scanf("%s",&a);
		scanf("%lld",&b);
		if(a[0]=='R')
		{
			num.push_back(b);
		}	
		else if(a[0]=='L')
		{
			num.insert(num.begin()+0,b);
		}
		else if(a[0]=='?')
		{
			long long int cnta=0;
			long long int cntb=0;
			vector< int >::iterator iter=std::find(num.begin(),num.end(),b);
//			for(long long int i=0;i<num.size();i++)
//			{
//				if(num[i]==b)
//				{
//					break;
//				}
//				cnta++;
//			}
			
			cnta=std::distance(num.begin(), iter);
			cntb=num.size()-cnta-1;
			long long int cnt=min(cnta,cntb);
			 cout<<cnt<<endl;
//			
//			printf("%lld\n",cnt);
		}
	}
	return 0;
}
