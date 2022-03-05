#include<bits/stdc++.h>
using namespace std;
struct name{
	string a;
	int b;
	int c;
}num[15];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i].a>>num[i].b >>num[i].c;
		if(num[i].b>20||num[i].b <15||num[i].c>70||num[i].c <50)
		{
			cout<<num[i].a <<endl;
		}	
	}
	
	return 0;
}
