//考生总数N, 录取最低分数线L, H为优先录取线(德分和才分均不低于此线)


#include<bits/stdc++.h>
using namespace std;

struct name
{
	string s;
	int de;
	int cai;
	
	int sum;
}; 

bool cmp(name a, name b)
{
	if (a.sum == b.sum)
	{
		if (a.de == b.de) return a.s < b.s;
		return a.de > b.de;
	}
	return a.sum > b.sum;
}
int main()
{
	int n, l, h;
	
	vector<name> a;//1类 
	vector<name> b;//2 
	vector<name> c;//3
	vector<name> d;//4
	
	cin >> n >> l >> h;
	
	for (int i = 1; i <= n; i ++ )
	{
		string s;
		int aa, bb;
		
		cin >> s >> aa >> bb;
		
		if (aa >= l && bb >= l)
		{
			if (aa >= h && bb >= h)
			{
				a.push_back({s, aa, bb, aa + bb});
			}
			else if (aa >= h && bb < h)
			{
				b.push_back({s, aa, bb, aa + bb});
			}
			else if (aa < h && bb < h && aa >= bb)
			{
				c.push_back({s, aa, bb, aa + bb});
			}
			else
			{
				d.push_back({s, aa, bb, aa + bb});
			}
		}
	}
	
	sort(a.begin(), a.end(), cmp);
	sort(b.begin(), b.end(), cmp);
	sort(c.begin(), c.end(), cmp);
	sort(d.begin(), d.end(), cmp);
	

	
	cout << a.size() + b.size() + c.size() + d.size();

	for (auto i : a)
	{
		cout << endl << i.s << " " << i.de << " " << i.cai;
	}
	
	for (auto i : b)
	{
		cout << endl << i.s << " " << i.de << " " << i.cai;
	}
	
	for (auto i : c)
	{
		cout << endl << i.s << " " << i.de << " " << i.cai;
	}
	
	for (auto i : d)
	{
		cout << endl << i.s << " " << i.de << " " << i.cai;
	}
	
	return 0;
}
