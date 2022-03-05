#include<bits/stdc++.h> 
using  namespace std;
int x, n, m;
string _10to_2(int x)
{
        string ss="";
        int ans[100];
        int cnt = 0;
        while (x > 0)
        {
                ss += (x % 2 + '0');
                x /= 2;
        }
        reverse(ss.begin(), ss.end());
        return ss;
}
int _10to_10(string s)
{
        reverse(s.begin(), s.end());
        int sum = 0;
        int cnt = 1;
        for (int i = 0; i < s.length(); i ++ )
        {
                sum = sum + (s[i] - '0') * cnt;
                cnt *= 10;
        }
        return sum;
}
string jinzhi(int x, int n)//十进制转为n进制数
{
	string a;
	while (x > 0)
	{
		int b = x % n;
//		if (b == 10) a.push_back('A');
//		else if (b == 11) a.push_back('B');
//		else if (b == 12) a.push_back('C');
//		else if (b == 13) a.push_back('D');
//		else if (b == 14) a.push_back('E');
//		else if (b == 15) a.push_back('F');
//		a.push_back(x % n + '0');
		x /= n;
		if (b == 10) a += 'A';
		else if (b == 11) a += 'B';
		else if (b == 12) a += 'C';
		else if (b == 13) a += 'D';
		else if (b == 14) a += 'E';
		else if (b == 15) a += 'F';
		else a += (b + '0');
	}
	return a;
}
int main()
{
	cin >> x >> n >> m;
	
	return 0;
}
