#include<iostream>
using namespace std;

const int MAXN = 300000 + 5;

char c, s[MAXN];
int n, m;

int main() {
    int T;

    cin >> T;
    while(T--) {
        cin >> n >> c >> (s + 1);
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(s[i] != c) {
                cnt++;
            }
        }
        if(cnt == 0) {
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        bool p = false;
        for(int i = 2; i <= n; i++) 
		{
            bool flag = true;
            for(int j = i; j <= n; j += i) 
			{
                if(s[j] != c) 
				{
                    flag = false;
                }
            }
            if(flag) 
			{
                ans = i;
                p = true;
                break;
            }
        }
        if(p) 
		{
            cout << 1 << endl;
            cout << ans << endl;
        } 
		else 
		{
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
        }
    }
    return 0;
}
