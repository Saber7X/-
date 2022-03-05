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
const int maxn=1e6+9;
int dp[maxn];
int ans=0;
int F(int x,int p){
	if(dp[x])return ans=ans+dp[x];
	ans++;
	if(x<=1)
	{
	//	if(dp[x]==0)dp[x]=ans;
		return dp[x]=ans;	
	}
	else  
	{
		return dp[x]=F(p%x,p);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		double sum=0;
		memset(dp,0,sizeof(dp));
		for(int i=1;i<n;i++)
		{
			ans=0;
			sum+=1.0*F(i,n);
			
		}
		//cout<<sum<<endl;
		printf("%.10f\n",sum/((n-1)*1.0));
	//	cout<<calu(n);
	}
	return 0;
}


