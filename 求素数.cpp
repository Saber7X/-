#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e8 + 10;


int st[N], prime[N], cnt = 0, sum[N];//判断是否是质数

void getprime(int n)
{
    for(int i=2;i<=n;i++)
	{
        if(!st[i]) prime[cnt ++ ] = i;
        
        for(int j = 0; prime[j] <= n / i; j ++ )
		{
            st[prime[j] * i] = true;
            if(i % prime[j] == 0) break;
        }
    }
}
int main()
{
	
	getprime(N);
	
	int t; cin >> t;
	int n, m;
	
	while (t -- )
	{
		scanf("%d%d", &n, &m);
		
		int a = upper_bound(prime, prime + cnt, n - 1) - prime;
		
		int b = upper_bound(prime, prime + cnt, m) - prime;
		
		printf("%d\n", b - a);
	}
	
	return 0;
}

/*
1 100000000
114 514
123 456
13360 65617
10010 10086
*/
