#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;//出生年，数字不同的；
	cin>>a>>b;
	int c=a;
	while(1)
	{
		
		int res[11]={0};
		int x=a;
		int g=0;
		while(g<4)
		{
			g++;
			res[x%10]++;
			//cout<<x%10<<" ";
			x/=10;
		}	
		//cout<<endl;	
		
		int cnt=0;
		for(int i=0;i<=9;i++)//要小于等于9！！！之前错了就是因为这个 
		{
			if(res[i]!=0)
			{
				cnt++;
			}
		}
		if(cnt==b)
		{
			printf("%d %04d",a-c,a);
			break;
		}
		a++;
	} 
	return 0;
}
