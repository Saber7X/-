#include<bits/stdc++.h> 
#define endl '\n'
using namespace std;
const int N = 1e4 + 10;
int n, m;

struct name{
	string s;//׼��֤
	int sum; //�ɼ� 
	string date; //����
	string p; //������� 
	string l; //������� 
	char t; //���� 
}num[N];

//  ������ţ������� 
pair<string, int> pp; 

bool cmp(name a, name b)
{
	if (a.sum == b.sum) return a.s < b.s;
	return a.sum > b.sum;
}

//bool cmp2(map<string, int> a, map<string, int> b)
//{
//	if (a.second == b.second) return a.first < b.first;
//	return a.second > b.second
//}

struct node{
	string s;//������ 
	int cnt;//���� 
};

bool cmp3(node a, node b)
{
	if (a.cnt == b.cnt) return a.s < b.s;
	return a.cnt > b.cnt;
}

int main()
{
	
	std::ios::sync_with_stdio(false);//�ر�ͬ�����˵���ܺ�C������������ã�����ѧ����
	std::cin.tie(0);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ ) 
	{
		string s; cin >> s;
		int sum; cin >> sum;
		num[i].s = s;
		num[i].sum = sum;
		num[i].date = s.substr(4, 6);
		num[i].p = s.substr(1, 3);
		num[i].l = s.substr(10, 3);
		num[i].t = s[0];
	}
	for (int i = 1; i <= m; i ++ )
	{
		int flag; cin >> flag;
		if (flag == 1)
		{
			char f;
			cin >> f;
			vector<name> ans;
			for (int j = 1; j <= n; j ++ )
			{
				name neww;
				if (num[j].t == f)
				{
					ans.push_back(num[j]);
				}
			}
			cout << "Case " << i << ": " << flag << " "<<f << endl;
			sort(ans.begin(), ans.end(), cmp);
			if (ans.size() == 0) cout << "NA";
			for (int j = 0; j < ans.size(); j ++ )
			{
				cout << ans[j].s << " " << ans[j].sum;
				if (j != ans.size() - 1) cout << endl;
			}
		}
		else if (flag == 2)
		{
			string f; cin >> f; //�������
			int sum = 0, cnt = 0;
			for (int j = 1; j <= n; j ++ ) 
			{
				if (num[j].p == f)
				{
					cnt ++;
					sum += num[j].sum;
				}
			}
			cout << "Case " << i << ": " << flag << " "<<f << endl;
			if (cnt == 0) 
			{
				cout << "NA";
			}
			else cout << cnt << " " << sum;
			
		}
		else if (flag == 3)
		{
			string f; cin >> f; //����
			map<string, int> ma;
			bool ff = 0;
			int cnt = 0;
			for (int j = 1; j <= n; j ++ )
			{
				if (num[j].date == f)
				{
					cnt ++;
					ma[num[j].p] ++;
					ff = 1;
				}
			}
			cout << "Case " << i << ": " << flag << " "<<f << endl;
			vector<node> ans;
			if (!ff)
			{
				cout << "NA";
			}
			else
			{
				int fff = 0;
				for(auto j : ma)
				{
					ans.push_back({j.first, j.second});
//					cout << i.first << " " << i.second;
//					if (cnt != fff) cout << endl;
//					fff ++;
				}
				sort(ans.begin(), ans.end(), cmp3);
				for (int j = 0; j < ans.size(); j ++ )
				{
					cout << ans[j].s << " " << ans[j].cnt;
					if (j != ans.size() - 1) cout << endl;
				}
			}
		}
		if (i != m) cout << endl;
	}
	return 0;
}
