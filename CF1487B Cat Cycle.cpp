#include<bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) 
	{
        int n, k;
	    scanf("%d %d", &n, &k);
	    if(n & 1) 
		{
	        printf("%d\n", (k - 1 + (k - 1) / (n / 2)) % n + 1);
	    } 
		else 
		{
	        printf("%d\n", (k - 1) % n + 1);
	    }
    }
    return 0;
}
