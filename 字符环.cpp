#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int n[256]={0};
	int cnt=0;
	bool a1[256]={0};
	bool b1[256]={0};
	cin>>a>>b;
	int lena=a.length();
	int lenb=b.length();
	int i=0,j=0;
	int cnt1=0;
	while(1)
	{
		if(i==lena)
		{
			i=0;
		}
		if(j==lenb)
		{
			j=0;
		}
		if(a[i]==b[j])
		{
			n[cnt]++;
		}
		if(a[i]!=b[j])
		{
			cnt++;
		}
		cnt1++;
		if(cnt1==lena+lenb)
		{
			break;
		}
	}
	sort(n,n+cnt);
	printf("%d",n[cnt-1]);
	return 0;
 } 
