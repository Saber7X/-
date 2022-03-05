//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//struct name{
//	int x; 
//	int id;
//}num[200005];
//
//bool cmp(name a, name b)
//{
//	return a.x<b.x;
//}
//signed main()
//{
//	int T; 
//	cin >> T;
//	while(T -- )
//	{
//		int n, w; 
//		cin >> n >> w;
//		for(int i = 1; i <= n; i ++ )
//		{
//			cin >> num[i].x;
//			num[i].id=i;
//		}
//		
//		sort(num+1, num+n+1,cmp);
//		
//		int sum = 0;
//		int t = 0;
//		int ans[200005]={0};
//		int cnt;
//		for(int i = 1; i <= n; i ++ )
//		{
//			sum  += num[i].x;
//			if(sum > w ) 
//			{
//				sum -=num[i].x;
//				continue;
//			}
//			ans[cnt ++] = num[i].id;
//			if(sum >= ceil(1.0 * w / 2) )
//			{
//				
//				break;
//			}
//		}
//		for(int i = 1; i <= c)
//		
//		
//		
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define INF 0x3f3f3f3f
#define int long long
const double PI=acos(-1.0);
const double e=exp(1.0);
const int M=1e9+7;
const int N=2e5+7;
struct node
{
	int da, id;
}a[N];
int n, w;
int sum, flag, idx, l, r;

bool cmp(node a, node b){
	return a.da<b.da;
}

void solve(){
	cin>>n>>w;
	l=(w+1)/2; r=w;
	sum=flag=0; idx=-1;
	for(int i=1; i<=n; i++){
		cin>>a[i].da; a[i].id=i;
		if(a[i].da>=l && a[i].da<=r) flag=1, idx=i;
		if(a[i].da<l) sum+=a[i].da;
	}
	if(flag) {cout<<1<<endl<<idx<<endl; return ;}
	if(sum<l || sum==0 ) {cout<<"-1"<<endl; return;}

	sort(a+1,a+1+n,cmp);
	sum=0;
	for(int i=1; i<=n; i++){
		sum+=a[i].da;
		if(sum>=l && sum<=r){
			cout<<i<<endl;
			for(int j=1; j<=i; j++){
				cout<<a[j].id<<" ";
			}
			cout<<endl;
			return ;
		}
	}
	return ;
}
signed main(){
	int T;
	cin>>T;
	while(T--) solve();
	return 0;
}

