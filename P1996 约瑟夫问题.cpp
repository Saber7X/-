//#include<bits/stdc++.h> 
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int> num;
//	for (int i= 1; i <= n; i ++ ) num.push_back(i);
//	int cnt = 1;
//	int flag = 0;
//	while (1)
//	{
//		if (num.size() == 0) break;
//		
//		if (cnt == m)
//		{
//			cout << num[flag] << " ";
//			cnt = 1;
//			num.erase(num.begin()+flag);
//		}
//		else
//		{
//			flag ++;
//			cnt ++;
//		}
//		
//		
//		if (flag > num.size() - 1) flag = 0;
//		
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	queue<int> q;
	for (int i = 1; i <= n; i ++ )
	{
		q.push(i);
	}
	int cnt = 1;
	while (!q.empty())
	{
		int t = q.front();
		q.pop();
		if (cnt == m)
		{
			cout << t << " ";
			cnt = 1;
		}
		else
		{
			q.push(t);
			cnt ++;
		}
	}
	return 0;
}
