#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		string a, b; cin >> a >> b;
		int cnt = 0;
		bool tt = false;
		for (int i = 0; i < n; i ++ )
		{
			if (a[i] == '1') cnt ++;
			if (a[i] == '0') cnt --;
			if (((a[i] != b[i] && a[i + 1] == b[i + 1]) || (a[i] == b[i] && a[i + 1] != b[i + 1])) && cnt != 0) 
			{
				tt = true;
				cout << "No" << endl;
				break;
			}
		}
		if (!tt) cout << "Yes" << endl;
	}
	return 0;
}
//https://blog.csdn.net/QWERKSDFMKD/article/details/115435343
//ֻҪ�����ʱ���Ǽ�ʹ01������ͬ��Ҳ����ν
//01������ȣ�һ����һ������ͬ����Ҳ��ͨ��ǰ��İ��Ǹ���ת���������� ��01011��10100
//01��������ȣ���һ������ͬ�� �� 
