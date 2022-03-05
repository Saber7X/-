#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	getchar();
	while(n--)
	{
		string s;
		getline(cin,s);
		int cnt=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]<0)
			{
				//i++;
				cnt++;
			}
		}
		cout<<cnt/2<<endl;
	}
	return 0;
}

