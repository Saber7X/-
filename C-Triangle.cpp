// ˼·��1�������n�������ȡ��������� �ж����ַ��� C(n,3)����ϣ�
// 	2�����ҳ������㲻����������ε��������б����ȺͲ�����б�����������
// 	�����������£�
#include<iostream>
#include <vector>
#include <assert.h>
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+10;
struct node//������ꣻ
{
	int x;
	int y;
}a[N];
signed main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].x >> a[i].y;
	int result=0;
    if (n <= 2)
	{
        result=0;
    }
	else
    {
        int number1 = n*(n - 1)*(n - 2) / 6;//��n������ȡ�������ж�����ȡ����
        int counts = 0;//���������������ε������1��б����ȣ�2��б�ʲ�����
        for (int i = 0; i < n;i++)
        {
        	
            for (int j = i + 1; j < n;j++)
            {
                for (int k = j + 1; k < n; k++)
                {
//                	cout << a[k].y - a[j].y << " " << a[k].x - a[j].x << " " << a[j].y - a[i].y << " " << a[j].x - a[i].x << endl;
					
                    if ((a[k].y - a[j].y) / (a[k].x - a[j].x) == (a[j].y - a[i].y) / (a[j].x - a[i].x))
                        counts++;
                    if (a[k].x == a[j].x == a[i].x)
                        counts++;
                    cout<<counts<<endl;
                }
            }
        }
        cout << result << endl;
        result=number1 - counts;//����֮����������εĸ�����
    }
	cout << result << endl;
}

