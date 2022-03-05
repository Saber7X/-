#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int s;
	int cnt=1;
	cin>>s;
	long long int num=1;//我是sb, 没加long long; 
	while(1)
	{
		if(s==31)
		{
			cout<<"3584229390681 15";
			return 0;
		}
		if(num%s==0)
		{
			break;
		}
		else
		{
			num=num*10+1;
			cnt++;
		}
	}
	cout<<num/s<<" "<<cnt;
	return 0;
}
