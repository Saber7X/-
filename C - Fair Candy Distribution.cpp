#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 200005;

struct name{
	int id;//��� 
	int sum;//ë���� 
	int flag;//���ִ��� 
	
}num[N];

bool cmp(name a, name b) //��Ŵ�С������ 
{
	return a.id < b.id; 
}

bool cmp1(name a, name b) //���ִ�������
{
	return a.flag <  b.flag;
} 

signed main()
{
	int n, k;//n����,k��ë�� 
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i ++ )
	{
		cin >> num[i].id;
		
		num[i].sum += (k / n);
		
		num[i].flag = i;//��¼���ִ��� 
	}
	
	int cnt = k % n;
	
	sort(num, num + n, cmp); //��������� 
	
	
	while(cnt --)
	{
		num[cnt].sum ++;
	}
	
	sort(num, num + n, cmp1); //�����ִ������� 
	
	for(int i = 0; i < n; i ++)
	{
		cout << num[i].sum << endl;
	}
	
	return 0;
}
