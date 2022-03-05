#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
     int t=1;
     bool s=0;
     int x=2;
    int num[10000];
	while(t<=10000) //枚举到第一万个整数，下标从1开始 
    {
    	s=0;
		for(int i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				s=1;
				break;
			}
		}
		if(s==0)
		{
			num[t++]=x;
		}
		x++;
	}
	while(scanf("%d",&n)!=EOF)
    {
        cout<<num[n]<<endl;
    }
     
    return 0;
}
