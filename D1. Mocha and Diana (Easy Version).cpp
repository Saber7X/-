//#include<bits/stdc++.h> 
//using namespace std;
//const int N = 105;
//bool st[N][N];
//struct name{
//	int u, v;
//}num[N];
//int main()
//{
//	int n, n1, n2;
//	scanf("%d%d%d", &n, &n1, &n2);
//	for (int i = 1; i <= n1 + n2; i ++ )
//	{
//		int u, v;
//		scanf("%d%d", &u, &v);
//		st[u][v] = true;
//	}
//	int ans = 0;
//	for(int i = 1; i <= n; i ++ )
//	{
//		for(int j =i + 1; j <= n; j ++ )
//		{
//			if (!st[i][j])
//			{
//				num[ans].u = i;
//				num[ans].v = j;
//				ans ++;
//			}
//		}
//	}
//	cout << ans << endl;
//	for(int i = 0; i < ans; i ++ )
//	{
//		printf("%d %d\n", num[i].u, num[i].v);
//	}
//	
//	return 0;
//}
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1005;

int f[N], f1[N];
bool st[N][N], st1[N][N];

int find(int x)
{
    if(f[x] == x) return x;
    return f[x] = find(f[x]);
}
int find1(int x)
{
    if(f1[x] == x) return x;
    return f1[x] = find1(f1[x]);
}

void hebing(int a, int b)
{
    a = find(a), b = find(b);
    f[a] = b;
}
void hebing1(int a, int b)
{
    a = find1(a), b = find1(b);
    f1[a] = b;
}

struct name{
	int u,v;
}num[N];

int main()
{
    int n, n1, n2;
    cin >> n >> n1 >> n2;
    
    for(int i = 0; i <= n; i ++ )
    {
        f[i] = i;
    }
    for(int i = 0; i <= n; i ++ )
    {
        f1[i] = i;
    }
    
    for(int i = 1; i <= n1; i ++ )
    {
    	int a, b;
		cin >> a >> b;
	    hebing(a, b);
	}
	
	for(int i = 1; i <= n2; i ++ )
    {
    	int a, b;
		cin >> a >> b;
	    hebing1(a, b);
	}
	
	int ans = 0;
	
    for(int i = 1; i <= n; i ++ )
    {
    	for(int j = i + 1; j <= n; j ++ )
    	{
    		
    			if(find(i) != find(j) && find1(i) != find1(j))
    			{
    				num[ans].u = i;
		    		num[ans].v = j;
		    		ans ++ ;
		    		hebing(i, j);
		    		hebing1(i, j);
				}
		}
	}
	cout << ans << endl;
	
	for(int i = 0; i < ans; i ++ )
	{
		cout << num[i].u << " " << num[i].v << endl;
	}
    return 0;
}
