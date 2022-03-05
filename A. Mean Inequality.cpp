#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int num[1015]={0};
		long long int n;
		cin>>n;
		for(long long int i=1;i<=n*2;i++)
		{
			cin>>num[i];
		}
		sort(num,num+2*n+1);
		
		if(n==1) cout<<num[2]<<" "<<num[1]<<endl;
		else
		 {
			for(long long int i=1,j=(n*2-2)/2+1;;i++,j++)
			{
				cout<<num[j]<<" "<<num[i]<<" ";
				if(j==2*n-2) break;
			}
			cout<<num[2*n-1]<<" "<<num[2*n]<<endl;
			
		}
		 
	}
	return 0;
}
