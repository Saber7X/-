//***********普通做法 
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int N = 1000005;
//
//signed main()
//{
//	int n, k, num[N], maxn = 0, sum = 0, sumn=0;
//	scanf("%lld %lld", &n, &k);
//	for(int i = 1; i < n; i ++)
//	{
//		scanf("%lld", &num[i]);
//		//cin >> num[i];
//		sumn += num[i];
//		sum += num[i];
//		if(i>k)
//		{
//			sum=sum-num[i-k];
//		}
//		
//		if(maxn < sum)
//		{
//			maxn = sum;
//		}
//		//maxn = max(maxn, sum);//cout << maxn << " ";
//	}
//	cout << sumn - maxn;
//	return 0;
//}

//***************************动态规划做法 
#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int N = 1000005;
signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
   
	int n, k, num[N], maxn = 0, sum = 0, sumn=0, f[N]={0};
	cin >> n >> k;
	int x, minn=N;
	for(int i = 1; i < n ; i ++)
	{
		cin >> x;
		f[i] = f[i - 1] + x;
		if(i >= k)
		{
			maxn = max(f[i] - f[i - k], maxn);
		}
		//cout<<maxn<<endl;
		
	}
	cout << f[n - 1] - maxn;
	return 0;
}
