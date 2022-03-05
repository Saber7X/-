#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		cin>>a;
		map<char,int> num;
		bool t=0;
		for(int i=0;i<a.length();i++)
		{
			num[a[i]]++;
			
			if(num[a[i]]>=2&&a[i]!=a[i-1])
			{
				t=1;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(t==0)
		{
			cout<<"YES"<<endl;
		}
		
	}
	return 0;
}
/*5
3
ABA
11
DDBBCCCBBEZ
7
FFGZZZY
1
Z
2
AB*/
