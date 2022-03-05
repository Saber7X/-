#include<stdio.h>
#include<math.h>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
const int N = 1005;

struct name
{
	int flag;
	string name;
	int a, b, c;
	int sum;
}num[N];

bool cmp(name a, name b)
{
	if (a.sum == b.sum) 
	{
		return a.flag < b.flag;
	}
	return a.sum > b.sum;
}

int main()
{
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i ++ )
	{
		cin >> num[i].name;
		scanf("%d%d%d", &num[i].a, &num[i].b, &num[i].c);
		num[i].flag = i;
		num[i].sum = num[i].a + num[i].b + num[i].c;
	}
	sort(num + 1, num + 1 + n, cmp);
	cout << num[1].name;
	printf(" %d %d %d", num[1].a, num[1].b, num[1].c);
	return 0;
}
