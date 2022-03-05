#include<bits/stdc++.h>
using namespace std;

int s[10010];  
int q[40];
void div(int x)
{
    int k = 0;
    while(x!=0){
        int y = x%2;
        q[k++] += y;
        x /= 2;
    }
}
 
int main()
{
    int n, t;
    cin >> t;
    while( t -- )
    {
    	cin >> n;
	    for(int i = 0; i < n; i++) cin >> s[i];
	    for(int i = 0; i < n; i++) div(s[i]);
	    int w = 0;
	    for(int i = 0; i < 32; i++)
		{
	        if (n - q[i] < q[i])
			{   // n是总个数，减去1的个数就是0的个数
	            w += pow(2, i);
	        }
	    }
	    cout << w << " ";
	    int r = 0;
	    for(int i = 0; i < n; i ++ )
		{
	        s[i] = w^s[i];
	    }
	    r = s[0]|s[1];
	    for(int i = 2; i < n; i ++ )
		{
	        r = r|s[i];
	    }
	    cout << r << endl;
	}
    
    return 0;
}

