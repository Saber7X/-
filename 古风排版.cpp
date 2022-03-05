#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;//ÁÐ
	int n;//ÐÐ
	int cnt=0;
	int i,j,k;
	string s;
	char ans[100][100];
	scanf("%d",&n);
	getchar();
	getline(cin,s);
	int len=s.length();
	m=(len+n-1)/n;
	for(i=m-1;i>0;i--)
	{
		
		for(j=0;j<n;j++)
		{
			
			ans[j][i]=s[cnt];
			cnt++;
			printf("%c",ans[j][i]);
			
		}
		printf("\n");
	} 
	
	return 0;
}
