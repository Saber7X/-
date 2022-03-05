#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e18;

unordered_map<int, int> flag;
int primes[N];
bool st[N];
void get_primes()
{
    int cnt=0;
    //1不是质数也不是合数
    for(int i=2;i<=N;i++){
        if(!st[i]) 
		{
			primes[++cnt]=i;//没有被筛去,说明是质数
			flag[i] = 1;
		}
        for(int j=1;i*primes[j]<=N;j++){
            st[i*primes[j]]=true;//筛去合数
            if(i%primes[j]==0) break;//核心操作,保证了O(n)的复杂度
        }
    }
}

int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int x; scanf("%lld", &x);
		int a = upper_bound(0, N, x) - primes;
		int b = upper_bound(0, N, a) - primes;
		int ans = (a + b) / 2;
		if (flag[ans] == 1) 
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
