#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,cnt=0,x,y,ss=0,maxn=0;string s;
		cin>>n>>s;
		if(s[0]=='1'||s[s.length()-1]=='1')
		{
			cout<<n*2<<endl;
			continue;
		}
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1'&&ss==0)
			{
				x=i+1;
				ss=1;
			}
			if(s[i]=='1') 
			{
				cnt++;
				y=i+1;
				maxn=max(maxn,max(y*2,(n-y+1)*2));
			}
		}
		if(cnt!=0)
		{
			cout<<maxn<<endl;
		}
		else
		{
			cout<<n<<endl;
		}
		
		
	}
	return 0;
}
