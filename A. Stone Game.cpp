////#include<bits/stdc++.h>
////using namespace std;
////int main() 
////{
////	int t;
////	cin>>t;
////	while(t--)
////	{
////		int n,maxn=0,minn=1000;
////		int flag1=0,flag2=0;
////		int num[1000];
////		cin>>n;
////		for(int i=0;i<n;i++)
////		{
////			cin>>num[i];
////			if(num[i]>=maxn)
////			{
////				flag1=i;
////				
////			}
////			if(num[i]<=minn)
////			{
////				flag2=i;
////			}
////		}
////		int cnt=0;
////		if()
////		cout<<cnt<<endl;
////		
////	}
////	return 0;
////}
//#include<bits/stdc++.h>
//using namespace std;
//int main() 
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n,maxn=0,minn=1000;
//		int flag1=0,flag2=0;
//		vector<int> num;
//		int res[1000]={0};
//		cin>>n;
//		for(int i=1;i<=n;i++)
//		{
//			int x;
//			num.push_back(x);
//			res[x]++;
//			if(x>maxn)
//			{
//				maxn=x;
//				
//			}
//			if(x<minn)
//			{
//				minn=x;
//			}
//		}
//		int a=0,b=0,c=0,cnt=n-1;
//		while(1)
//		{
//			if(res[maxn]==0&&res[minn]==0)
//			{
//				break;
//			}
//			int xx=num[num.size()];
//			num.pop_back();
//			res[xx]--;
//			a++;
//		}
//		while(1)
//		{
//			if(res[maxn]==0&&res[minn]==0)
//			{
//				break;
//			}
//			int xx=num[num.size()];
//			num.pop_back();
//			res[xx]--;
//			a++;
//		}
//		
//		while(1)
//		{
//			if(res[maxn]==0&&res[minn]==0)
//			{
//				break;
//			}
//			int xx=num[num.begin()];
//			num.erase(num.begin()+0);
//			res[xx]--;
//			b++;
//		}
//		bool ss=0;
//		while(1)
//		{
//			if(ss==0)
//			{
//				if(res[maxn]==0||res[minn]==0)
//				{
//					break;
//				}
//				int xx=num[num.begin()];
//				num.erase(num.begin()+0);
//				res[xx]--;
//				b++;
//			}
//			
//		}
//		cout<<cnt<<endl;
//		
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int maxn=-1,minn=101;
		int a,b;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			int cc;
			cin>>cc;
			if(cc>maxn)
			{
				maxn=cc;
				a=i;
			}
			if(cc<minn)
			{
				minn=cc;
				b=i;
			}
		}
		if(b<a)
		{
			swap(a,b);
		}
		int x=b;
		int y=n-a+1;
		int z=a+(n-b+1);
		cout<<min(x,min(y,z))<<endl;
		
	}
	return 0;
}
