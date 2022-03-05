#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	int cnt=0; 
	cin>>k;
	string a;
	while(1)
	{
		cin>>a;
		if(a=="End")
		{
			break;
		}
		if(cnt==k)
		{
			cnt=-1;
			cout<<a<<endl;
			
		}
		else if(a=="ChuiZi")
		{
			cout<<"Bu"<<endl;
		}
		else if(a=="JianDao")
		{
			cout<<"ChuiZi"<<endl;
		}
		else if(a=="Bu")
		{
			cout<<"JianDao"<<endl;
		}
		cnt++;
		
	}
	return 0;
}

