#include<bits/stdc++.h>
struct name{
	char a[16];//准考证号 
	int b;//试机座位号 
	int c;//考试座位号 
}num[10006];
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>num[i].a;
		getchar();
		cin>>num[i].b>>num[i].c;
	}
	int m;
	scanf("%d",&m);
	int ans[10001];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&ans[i]);
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ans[i]==num[j].b)
			{
				cout<<num[j].a<<num[j].c<<endl;
			}
		}
	}
	return 0;
 } 
/*4
3310120150912233 2 4
3310120150912119 4 1
3310120150912126 1 3
3310120150912002 3 2
2
3 4*/
