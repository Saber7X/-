#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 10;
long long int prime[N];//存质数
bool st[N];//判断是否是质数
long long int cnt;//记质数个数
void getprime(int n)
{
    for(long long int i=2;i<=N;i++)
	{
        if(st[i]==false) prime[cnt++]=i;
        for(long long int j=0;prime[j]<=N/i;j++){
            st[prime[j]*i]=true;
            if(i%prime[j]==0) break;
        }
    }
}

int c = 0;//记录匹配个数 

map<string, bool> flag;
map<int, string> flag2;

int dfs(string s)

int main()
{
	
	for (int i = 0; i < cnt; i ++ ) 
	{
		string ss = to_string(i);
		flag[ss] = 1;
		flag2[i] = ss;
	}
	
	int t; cin >> t;
	
	while (t -- )
	{
		
		c = 0;
		
		string s; cin >> s;
		
		for (int i = 0; i < s.length(); i ++ )
		{
			if (s[i] == '_') c++;
		}
		
		int len = s.length();
		
		if (flag[substr(len - 2, len)] == false && s[len - 2] != '_' && s[len - 1] != _) cout << 0 << endl;
		else if (flag[substr(len - 4, len)] == false && s[len - 2] != '_' && s[len - 1] != '_' && s[len - 3] != '_' && s[len - 4] != '_') cout << 0 << endl;
		else if (flag[substr(len - 8, len)] == false && s[len - 2] != '_' && s[len - 1] != '_' && s[len - 3] != '_' && s[len - 4] != '_' && s[len - 5] != '_' && s[len - 6] != '_'  && s[len - 7] != '_' && s[len - 8] != '_') cout << 0 << endl;
		else if (flag[substr(len - 2, len)] == true && flag[substr(len - 4, len)] == true && flag[substr(len - 8, len) && c == 0] == true)
		else
		{
			
		}
	}
}
