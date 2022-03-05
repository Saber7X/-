#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int f[N];
char s[N];
int cnt, n;
int main()
{
    cin >> n;
    scanf("%s", s + 1);
    for (int i = 1; i <= n; i ++ )
    {
    	f[i] = 1;
    	for (int j = 1; j < i; j ++ )
    	{
    		if (s[j] <= s[i])
    		{
    			f[i] = max(f[i], f[j] + 1);
			}
		}
	}
    for (int i = 1; i <= n; i ++ ) 
    {
    	cnt = max(cnt, f[i]);
	}
    
    
    
    cout << n - cnt << endl;
    return 0;
}
