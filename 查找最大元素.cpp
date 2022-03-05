#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
		char maxn=0;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]>maxn)
			{
				maxn=a[i];
			}
			
		}
		for(int i=0;i<a.length();i++)
		{
			cout<<a[i];
			if(a[i]==maxn)
			{
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	
	return 0;
}

