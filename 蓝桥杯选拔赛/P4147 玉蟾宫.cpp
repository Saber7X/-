////#include<bits/stdc++.h> 
////using namespace std;
////const int N = 1e3 + 10;
////int g[N][N];
////int n, m;
////int f[N][N];
////int main()
////{
////	cin >> n >> m;
////	for (int i = 1; i <= n; i ++ )
////	{
////		for (int j = 1; j <= m; j ++ )
////		{
//////			char c; cin >> c;
//////			if (c == 'F') g[i][j] = 1;
//////			else g[i][j] = 0;
////			cin >> g[i][j];
////		}
////	}
////	int ans = 0;
////	for (int i = 1; i <= n; i ++ )
////	{
////		for (int j = 1; j <= m; j ++ )
////		{
////			if (g[i][j])
////			{
////				f[i][j] = min(f[i - 1][j], min (f[i - 1][j - 1], f[i][j - 1])) + 1;
////				ans = max(f[i][j], ans);
////			}
////		}
////	}
////		
//////	}
////	cout << ans << endl;
////	return 0;
////}
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1005;
//int n, m;
//bool g[N][N];
//int l[N][N], r[N][N], u[N][N];
//
//void init()
//{
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 2; j <= m; j ++ )
//		{
//			if (g[i][j - 1]) l[i][j] = l[i][j - 1];
//		}
//	}
//	
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = m - 1; j >= 1; j --)
//		{
//			if (g[i][j + 1]) r[i][j] = r[i][j + 1];
//		}
//	}
//	
//	for (int i = 2; i <= n; i ++ )
//	{
//		for (int j = 1; j <= m; j ++ )
//		{
//			if (g[i - 1][j]) u[i][j] = u[i - 1][j] + 1;
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 1; j <= m; j ++ )
//		{
//			char c; 
//			cin >> c;
//			
//			if (c == 'f') g[i][j] = 0;
//			else g[i][j] = 1;
//			
//			l[i][j] = r[i][j] = j;
//			u[i][j] = 1;
//		}
//	}
//	
//	init();
//	
//	int res = 0;
//	
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 1; j <= m; j ++ )
//		{
//			if (!g[i][j]) continue;
//			if (i > 1 && g[i - 1][j])
//			{
//				l[i][j] = max (l[i][j], l[i - 1][j]);
//				r[i][j] = min (r[i][j], r[i - 1][j]);
//			}
//			res = max (res, u[i][j] * (r[i][j] - l[i][j] + 1));
//		}
//	}
//	cout << res * 3 << endl;
//	
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

const int N=1005;
int n,m;
bool g[N][N];
int l[N][N],r[N][N],u[N][N]; 

void init(){
	// init l[][]
	for(int i=1;i<=n;i++)
		for(int j=2;j<=m;j++)
		{
			if(g[i][j-1]) l[i][j]=l[i][j-1];
		}
			
	
	// init r[][]
	for(int i=1;i<=n;i++)
		for(int j=m-1;j;j--)
		{
			if(g[i][j+1]) r[i][j]=r[i][j+1];
		}
			
	
	// init u[][]
	for(int i=2;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(g[i-1][j]) u[i][j]=u[i-1][j]+1;
		}
			
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char ch; cin>>ch;
			
			if (ch=='F') g[i][j] = 1;
			else g[i][j] = 0;
			
			l[i][j]=r[i][j]=j;
			u[i][j]=1;
		}
	}
	cout << endl;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout << g[i][j] << " ";
		}
		cout << endl;
	}
//	init();
//	cout << endl;
//	cout << "左 : "<< endl; 
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			cout << l[i][j] << " ";
//		}
//		cout << endl;
//	}
	
//	cout << endl;
//	cout << "右 : "<< endl; 
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			cout << r[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "上 : "<< endl; 
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			cout << u[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
	init();
	cout << endl;
	cout << "左 : "<< endl; 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout << l[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "右 : "<< endl; 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout << r[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "上 : "<< endl; 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout << u[i][j] << " ";
		}
		cout << endl;
	}
	 // 预处理出每个点能够向左、向右、走到的最远点对应的位置,以及向上走的最远距离。
	
	int res=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(!g[i][j]) continue;
			if(i>1 && g[i-1][j])
			{
				l[i][j]=max(l[i][j],l[i-1][j]), r[i][j]=min(r[i][j],r[i-1][j]);
			}
			res=max(res,u[i][j]*(r[i][j]-l[i][j]+1));	
		}
	}
	
	cout << endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout << l[i][j] << " ";
		}
		cout << endl;
	}
	cout<<res*3<<endl;
	
	return 0;
}   
