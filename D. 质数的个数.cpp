#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int a[N];

long long int prime[N];//存质数
bool st[N];//判断是否是质数
long long int cnt;//记质数个数
int ss[N];
int sum[N];

void getprime(int n)
{
    for(long long int i=2;i<=n;i++)
	{
        if(st[i]==false) 
		{
			prime[cnt++]=i;
			ss[i] = 1;
		}
        
        for(long long int j=0;prime[j]<=n/i;j++)
		{
            st[prime[j]*i]=true;
            if(i%prime[j]==0) break;
        }
    }
}
int main()
{
	getprime(N);
//	for (int i = 0; i < 10; i ++ ) cout << prime[i] << " ";
//	cout << endl;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%d", &a[i]);
		if (ss[a[i]] == 1)
		{
			sum[i] = sum[i - 1] + 1;
		}
		else
		{
			sum[i] = sum[i - 1];
		}
	}
//	for (int i = 1; i <= n; i ++ ) cout << sum[i] << " ";
	int q;
	scanf("%d", &q);
	while (q -- )
	{
		int l, r;
		scanf("%d%d", &l, &r);
		printf("%d\n", sum[r] - sum[l - 1]);
	}
	return 0;
}
/*
6
1 7 3 5 8 10
*/
