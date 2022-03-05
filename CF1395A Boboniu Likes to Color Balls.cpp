#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,g,b,w,cnt=0;
		
		cin>>r>>g>>b>>w;
		if(r%2!=0)
		{
			cnt++;
		}
		if(g%2!=0)
		{
			cnt++;
		}
		if(b%2!=0)
		{
			cnt++;
		}
		if(w%2!=0)
		{
			cnt++;
		}
//		if(cnt>=3)
//		{
//			cout<<"Yes"<<endl;
//		}
//		else if(r==0||g==0||b==0)
//		{
//			cout<<"No"<<endl;
//		}
//		else
//		{
//			if(cnt==2)
//			{
//				cout<<"No"<<endl;
//			}
//			else
//			{
//				cout<<"Yes"<<endl;
//			}
//		}
		if(cnt==0)
		{
			cout<<"Yes"<<endl;
		}
		else if(cnt==1)
		{
			cout<<"Yes"<<endl;
		}
		else if(r==0||g==0||b==0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			if(cnt==2)//有两个奇数时无论如何都不能变成偶数 
			{
				cout<<"No"<<endl;
			}
			else
			{
				cout<<"Yes"<<endl;
			} 
		}
		
	}
	
	return 0;
}
