#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	long long int s;
	cin>>s;
	s%=86400000;
	long long int h=s/3600000;
	s%=3600000;
	long long int m=s/60000;
	s%=60000;
	long long int s1=s/1000;
	printf("%02lld:%02lld:%02lld",h,m,s1);
	return 0; 
}
