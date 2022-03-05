#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[6];
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		int suma=0;
		int sumb=0;
		int cntn=3;
		while(cntn>0)
		{
			cntn--;
			suma=suma+x%10;
			x/=10;
		}
		int cnt=3;
		while(cnt>0)
		{
			cnt--;
			sumb+=x%10;
			x/=10;
		}
		if(suma==sumb)
		{
			cout<<"You are lucky!"<<endl;
		}
		else
		{
			cout<<"Wish you good luck."<<endl;
		}
	}
	return 0;
}
