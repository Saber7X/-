#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	
	for (int k = 1; k <= t; k ++ )
	{
		map<char, int> res;
		char s[100005];
		
		int maxn = 0;
		
		scanf("%s", s + 1);
		int len = strlen(s + 1);
		
		for(int i = 1; i <= len; i ++ ) res[s[i]] ++;
		
		for(char i = 'a'; i <= 'z'; i ++ ) maxn = max(res[i], maxn);
		
		printf("Case #%d: %d\n", k, maxn);
	}
	return 0;
}
