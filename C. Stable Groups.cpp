//#include<bits/stdc++.h>
//#define int long long 
//using namespace std;
//const int N = 2e6+5;
//int a[N];
//int b[N];
//signed main()
//{
//	int n, k, x;
//	scanf("%lld%lld%lld", &n, &k, &x);
//	
//	for (int i = 1; i <= n; i++ ) scanf("%lld", &a[i]);
//	
//	sort(a + 1, a + n + 1);
//	
//	int cnt = 0;
//	for(int i = 2; i <= n; i++ )
//	{
//		if(a[i] - a[i - 1] > x)
//		{
//			b[cnt ++] = (a[i] - a[i - 1] - 1) / x;
//		}
//	}
//	
//	int sum = cnt + 1;
//	sort(b + 1, b + cnt + 1);
//	
//	for(int i = 1; i <= cnt; i ++)
//	{
//		if(k >= b[i])
//		{
//			sum -- ;
//			k -= b[i];
//		}
//		else break; 
//	} 
//	cout << sum;
//	return 0;
//}
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int maxn=2e6+3;
ll a[maxn];
ll b[maxn];
int main(){
	int n;
	ll k,x;
	scanf("%d %lld %lld",&n,&k,&x);
	for(int i=1;i<=n;++i)
		scanf("%lld",&a[i]);
	sort(a+1,a+n+1);
	int tot=0;
	for(int i=2;i<=n;++i){
		if(a[i]-a[i-1]>x){
			b[++tot]=(a[i]-a[i-1]-1)/x;
		}
	}
	int sum=tot+1;
	sort(b+1,b+tot+1);
	for(int i=1;i<=tot;++i){
		if(k>=b[i]){
			sum--;
			k-=b[i];
		}
		else break; 
	} 
	printf("%d",sum);
	return 0;
}
