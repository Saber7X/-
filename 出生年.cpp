#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b[4],n,x,i=4,t=1,j=4;
	cin>>x>>n;
	int a=x;
	for(i=0;i<3012;i++)
	{
		while(a>0)
		{
		j--;
		b[j]=a%10;
		a/=10;
		//printf("%d",b[i]);
		}
		if(b[0]!=b[1]&&b[0]!=b[2]&&b[0]!=b[3])
		{
			t++;
		}
	}
}
