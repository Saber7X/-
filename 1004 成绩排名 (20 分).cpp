#include<bits/stdc++.h>
using namespace std;
struct name{
	string s;//ÐÕÃû 
	string ss;//Ñ§ºÅ 
	int a;//³É¼¨ 
}num[10005];

bool cmp(name a, name b)
{
	return a.a > b.a;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ ) 
	{
		cin >> num[i].s >> num[i].ss >> num[i].a;
	}
	sort(num + 1, num + 1 + n, cmp);
	
	cout << num[1].s << " " << num[1].ss << endl; 
	
	cout << num[n].s << " " << num[n].ss; 
	
	return 0;
}
