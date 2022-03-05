//#include<bits/stdc++.h> 
//#define int long long
//using namespace std;
//const int N = 100005;
//struct name{
//	int t;
//	int flag;
//	int id;
//	int l, r;
//}num[N];
//bool cmp(name a, name b)
//{
//	return a. t > b. t;
//}
//bool cmp2(name a, name b)
//{
//	return a. flag < b. flag;
//}
//int n, m;
//int st[N];
//
//signed main()
//{
//	
//	cin >> n >> m;
//	for(int i = 1; i <= n; i ++ )
//	{
//		cin >> num[i].t;
//	}
//	sort(num + 1, num + 1 + n, cmp);
//	int cnt = m;
//	bool ss = 1;
//	for(int i = 1; i <= n; i ++ )
//	{
//		
//		num[i].id = cnt;
//		num[i].l = st[cnt];
//		num[i].r = st[cnt] + num[i].t;
//		st[cnt] = st[cnt] + num[i].t;
//        num[i].flag = num[i].r - num[i].l;
//		if(ss == 1)
//		{
//			cnt ++;
//			if(cnt > m) 
//			{
//				ss = 0;
//				cnt = m;
//			}
//		}
//		else if(ss == 0)
//		{
//			if(num[i + 1].t >= num[i + 1].t + st[cnt])
//			{
//				
//				num[i + 1].id = cnt;
//				num[i + 1].l = st[cnt];
//				num[i + 1].r = st[cnt] + num[i].t;
//				st[cnt] = st[cnt] + num[i + 1].t;
//		        num[i + 1].flag = num[i + 1].r - num[i + 1].l;
//		        ss = 1;
//		        cnt ++;
//				i ++;
//				continue;
//			}
//			cnt --;
//			if(cnt < 1) 
//			{
//				ss = 1;
//				cnt = 1;
//			}
//		}
//		
//	}
//	sort(num + 1, num + 1 + n, cmp2);
//	for(int i = 1; i <= n; i ++ )
//	{
//		cout << "1 " << num[i].id << " "<<num[i].l << " " << num[i].r << endl;
//	}
//	return 0; 
//}
#include<bits/stdc++.h>
using namespace std;

long long sum;
int ma,a[100010],n,m;

int main()
{
	scanf("%d%d",&n,&m),ma=sum=0;

	for (int i=1; i<=n; i++) 
	{
		scanf("%d", &a[i]);
		ma = max(ma, a[i]);
		sum += a[i];//求最大值和总和 
	}
	long long ans = max( ma * 1ll, sum / m + ( sum%m!=0 ) );
	int nw=1;
	long long lef = ans;
	for (int i=1; i<=n; i++) 
	{
		if (lef>=a[i]) 
		{
			printf("1 %d %lld %lld\n",nw,ans-lef,ans-lef+a[i]);
			lef-=a[i];
			if (!lef) lef=ans,nw++;
		} else
		{
			printf("2 %d %lld %lld %d %lld %lld\n",nw+1,0,a[i]-lef,nw,ans-lef,ans);
			nw++,lef=ans-(a[i]-lef);
		}
	}
	return 0;
}
