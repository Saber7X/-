#include<bits/stdc++.h>
#define int long long
using namespace std;

map <string, int> a;//����ִ���
map <string, int> b;//���Ƿ���ֹ� 0�����ڣ�1����
map <string, int> cc;//�������� 
 
struct name{
	string ss;
}num[1000005];

int cnt;
signed main()
{
	int n; cin >> n;
	int x, y; char c;
	string s;
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%lld", &x);
		cin >> s;
		
		if (x == 1)//�½���� 
		{
			if (b[s] == 0)//�����鲻���� 
			{
				num[cnt ++].ss = s;
				cc[s] ++; 
				a[s] = 0;//����Ϊ0 
				b[s] = 1;//���Ϊ���ֹ� 
				cout << "Success" << endl;
			}
			else cout << "Duplicated" << endl;//����Ѵ��� 
		}
		
		if (x == 2)//��Ӱ������ 
		{
			cin >> y;
			if (b[s] == 1)//��������� 
			{
				a[s] += y;//������� 
				cout << "Success" << endl;
			}
			else cout << "Misread" << endl;//�����鲻���� 
		}
		if (x == 3)//ɾ����� 
		{
			if (b[s] == 1)//��������� 
			{
				b[s] = 0;//���Ϊδ���ֹ� 
				a[s] = 0;//�������� 
				cout << "Success" << endl;
			}
			else cout << "Misread" << endl;//�����鲻����
		}
		if (x == 4)//��ѯ���
		{
			if (b[s] == 1)//��������� 
			{
				cout << a[s] << endl;//������� 
			}
			else cout << "Failed" << endl;//�����鲻����
		}
	}
	for (int i = 0; i < cnt; i ++ )
	{
		if (b[num[i].ss] == 1) 
		{
			if (cc[num[i].ss] == 1) 
			{
				cout << num[i].ss << " " << a[num[i].ss] << endl;
			}
			cc[num[i].ss] -- ;
		}
	}
	return 0;
}
