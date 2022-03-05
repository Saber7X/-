//看是否对称来判断 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[100][100];
	int b;int cnt=0;
	int c[100][100];int t=0;
	scanf("%c %d",&a,&b);
	getchar();
	for(int i=0;i<b;i++)
	{
		gets(a[i]);
	}
	//printf("\n");
	/*for(int i=0;i<b;i++)
	{
		cout<<a[i];
		printf("\n");
	}*/
	for(int i=0;i<b/2;i++)
	{
		if(a[i]!=a[b-cnt])
		{
			t=1;
			break;
		}
		cnt++;
	}
	if(t=0)
	{
		printf("bu yong dao le");
	}
	else
	{
		for(int i=b-1;i>=0;i--)
		{
			for(int j=b-1;j>=0;j--)
			{
				if(a[i][j]==' ')
				{
					printf(" ");
				}
				else
				{
					printf("%c",b);
				}
			}
		}
	}
	
	
	return 0;
}
