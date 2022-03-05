#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
inline int read(){
   int s=0,w=1;
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();//s=(s<<3)+(s<<1)+(ch^48);
   return s*w;
}
stack<int>s1;
stack<int>s2;
int main()
{
	int n;
	cin>>n;
	s1.push(1);
	int tot=1;//总量 
	int ans=1;//加入的当前高度 
	int f=0;
	while(tot<n)
	{
		if(f==0)
		{
			while(s1.empty()==0)
			{
				if(s1.top()==ans)
				{
					s2.push(ans+1);
					s2.push(s1.top());
					s2.push(ans+1);
					tot+=2;
				}
				else 
				{
					s2.push(s1.top());
				}
				s1.pop();
			}
			ans++;
		}
		else 
		{
			while(s2.empty()==0)
			{
				if(s2.top()==ans)
				{
					s1.push(ans+1);
					s1.push(s2.top());
					s1.push(ans+1);
					tot+=2;
				}
				else 
				{
					s1.push(s2.top());
				}
				s2.pop();
			}
			ans++;
		}
		f^=1;
	}
	if(f==0)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<s1.top()<<" ";
			s1.pop();
		} 
	}
	else 
	{
		for(int i=1;i<=n;i++)
		{
			cout<<s2.top()<<" ";
			s2.pop();
		}
	}
	return 0;
}


