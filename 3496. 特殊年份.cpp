#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int cnt=0;
	for(int i=1;i<=5;i++)	
	{
		string s;
		cin>>s;
		if(s[0]==s[2])
		{
			
			if(s[1]-'0'+1==s[3]-'0')
			{
				//cout<<s<<endl;
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
