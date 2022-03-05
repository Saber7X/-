//#include<bits/stdc++.h> 
//#define int long long
//using namespace std;
//
//const int N = 2e5 + 10, MAXN = 1e9 + 100;
//
//int num[N];
////int minn1[N];
//int minn2[N];
//signed main()
//{
//	int t; cin >> t;
//	while (t -- )
//	{
//		int n, a, b; cin >> n >> a >> b;
//		minn1[0] = MAXN;
//		priority_queue <int, vector<int>, less<int>> q;
//		vector<int> zz;//存储被弹出的数 
//		for (int i = 1; i <= n; i ++ ) 
//		{
//			cin >> num[i];
////			minn1[i] = min(minn1[i - 1], num[i]);
//			
//		}
////		for (int i = 1; i <= n; i ++ ) cout << minn1[i] << " ";
////		cout << endl;
//		minn2[n + 1] = MAXN;
//		for (int i = n ; i >= 1; i -- ) 
//		{
//			minn2[i] = min(minn2[i + 1], num[i]);
////			cout << minn2[i] << " ";
//		}
////		cout << endl; 
//		int ans = MAXN;
////		q.push(num[1]);
//		for (int i = 2; i <= n - 1; i ++ )
//		{
//			q.push(num[i - 1]);
//			int x=0;
//			while (1)
//			{
//				if(q.size()==0)
//				{
//					x = -MAXN;
//					break;
//				}
//				//cout<<"1";
//				if (q.top() < num[i]) 
//				{
//					x = q.top();
//					break;
//				}else{
//					zz.push_back(q.top());
//					q.pop();
//				}
//			}
//			for(int j=0;j<zz.size();j++)
//			{
//				q.push(zz[j]);
//			}
//			zz.clear();
//			//cout<<x<<" ";
//			//int x = minn1[i - 1];
//			int y = minn2[i + 1];
//			if (x < num[i] && num[i] > y)
//			{
//				
//				ans = min(ans, a * (num[i] - x) - b * (num[i] - y));
////				cout << i << " " << ans << " " << x << " " << y << endl;
//			}
//		}
//		//cout<<endl;
//		if (ans >= MAXN)
//		{
//			cout << "000" << endl;
//			continue;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}


//#include<bits/stdc++.h> 
//#define int long long
//using namespace std;
//
//const int N = 2e5 + 10, MAXN = 1e12 + 100;
//
//
//inline int read()
//{
//    int X=0,w=0; char ch=0;
//    while(!isdigit(ch)) {w|=ch=='-';ch=getchar();}
//    while(isdigit(ch)) X=(X<<3)+(X<<1)+(ch^48),ch=getchar();
//    return w?-X:X;
//}
//
//inline void write(int x)
//{
//     if(x<0) putchar('-'),x=-x;
//     if(x>9) write(x/10);
//     putchar(x%10+'0');
//}
//
//int num[N];
//int minn2[N];
//
//signed main()
//{
//	int t; t = read();;
//	while (t -- )
//	{
//		int n, a, b; 
//		n = read();
//		a = read();
//		b = read();
//		
//		priority_queue <int, vector<int>, less<int>> q;//降序队列
//		 
//		vector<int> zz;//存储被弹出的数
//		 
//		for (int i = 1; i <= n; i ++ ) 
//		{
//			num[i] = read();
//		}
//		
//		minn2[n + 1] = MAXN;
//		
//		for (int i = n ; i >= 1; i -- ) 
//		{
//			minn2[i] = min(minn2[i + 1], num[i]);
//		}
//		
//		int ans = MAXN;
//		
//		for (int i = 2; i <= n - 1; i ++ )
//		{
//			q.push(num[i - 1]);
//			int x=0;
//			while (1)
//			{
//				if(q.size()==0)
//				{
//					x = MAXN;
//					break;
//				}
//				if (q.top() < num[i]) 
//				{
//					x = q.top();
//					break;
//				}else{
//					zz.push_back(q.top());
//					q.pop();
//				}
//			}
//			for(int j=0;j<zz.size();j++)
//			{
//				q.push(zz[j]);
//			}
//			zz.clear();
//			int y = minn2[i + 1];
//			if (x < num[i] && num[i] > y)
//			{
//				
//				ans = min(ans, a * (num[i] - x) - b * (num[i] - y));
//			}
//		}
//		if (ans == MAXN)
//		{
//			write(000);
//			write(000);
//			write(000);
//		}
//		else write(ans);
//		puts("");
//	}
//	return 0;
//}

#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 2e6 + 10, MAXN = 1e12 + 123;

int num[N];
int minn2[N];

signed main()
{
	int t; scanf("%lld", &t);
	while (t -- )
	{
//		memset(minn2, 0, sizeof minn2);
//		memset(num, 0, sizeof num);
		int n, a, b; 
//		n = read();
//		a = read();
//		b = read();		
		scanf("%lld%lld%lld", &n, &a, &b);
		set<int>s;		 
		for (int i = 1; i <= n; i ++ ) scanf("%lld", &num[i]);
		
		minn2[n + 1] = MAXN;
		
		for (int i = n ; i >= 1; i -- ) 
		{
			minn2[i] = min(minn2[i + 1], num[i]);
		}
		
		int ans = MAXN;
		
		for (int i = 2; i <= n - 1; i ++ )
		{
			s.insert(num[i - 1]);
			int k=num[i];
			auto x=--s.lower_bound(k);//错误原因：没有判断x是否是当前set的第一个，直接-了可能会出错； 
			if(*x<num[i])
			{
				//cout<<i<<" "<<*x<<endl;;
				int y = minn2[i + 1];
				if (*x < num[i] && num[i] > y)
				{
					ans = min(ans, a * (num[i] - *x) - b * (num[i] - y));
				}
			}
		}
		if (ans >= MAXN)
		{
			printf("000\n");
		}
		else printf("%lld\n", ans);
//		puts("");
        s.clear();
	}
	return 0;
}
