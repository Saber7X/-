#include<bits/stdc++.h>
//#define int long long
using namespace std;
int read()  
{  
    int s = 0, f = 1;  
    char ch = getchar();  
    while(!isdigit(ch)) {  
        if(ch == '-') f = -1;  
        ch = getchar();  
    }  
    while(isdigit(ch)) {  
        s = s * 10 + ch - '0';  
        ch = getchar();  
    }  
    return s * f;  
}  


int n;
int x, y;
long long int ans;
signed main()
{
	int t; 
	scanf("%d", &t);
	while (t -- )
	{
		int du[100005] = {0};
		n = read();
		for (int i = 1; i <= n - 1; i ++ )
		{
//			scanf("%lld%lld", &x, &y);
			du[x = read()] ++;
			du[y = read()] ++;
		}
		
		ans = 0;
		for (int i = 1; i <= n; i ++ )
		{
			if (du[i] >= 3)
			{
				ans = ans + n - 1 - du[i];
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
