#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	int cnt=0;
	while(1!=0)
	{
		i=0;
		gets(num[i].a);
		//scanf("%s",&num[i].a[]);
		i++;
		cnt++;
		if(num[i].a[0]=='.')
		{
			cnt-=1;
			break;
		}
	}
	if(cnt>=14)
	{
		printf("%s and %s are inviting you to dinner...",num[2].a,num[12].a);
		
	}
	
}
