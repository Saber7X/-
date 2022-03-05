#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int b[10]={0};
	int sum=0; 
	int len=a.length();
	int i;
	for(i=0;i<len;i++)
	{
		a[i]=tolower(a[i]);
		//cout<<a[i];
	}
	
	for(i=0;i<len;i++)
	{
		if(a[i]=='g')
		{
			b[0]++;
			sum++;
		}
		else if(a[i]=='p')
		{
			b[1]++;
			sum++;
		}
		else if(a[i]=='l')
		{
			b[2]++;
			sum++;
		}
		else if(a[i]=='t')
		{
			b[3]++;
			sum++;
		}
	}
	//printf("b[0]=%d\nb[1]=%d\nb[2]=%db[3]=%dsum=%d",b[0],b[1],b[2],b[3],sum);
	while(sum>0)
	{
		if(b[0]>0)
		{
			cout<<"G";
			b[0]--;
			sum--;
		}
		if(b[1]>0)
		{
			printf("P");
			b[1]--;
			sum--;
		}
		if(b[2]>0)
		{
			printf("L");
			b[2]--;
			sum--;
		}
		if(b[3]>0)
		{
			printf("T");
			b[3]--;
			sum--;
		}
	}
	return 0;
	
} 
