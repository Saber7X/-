#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int num[100];//´æ´¢µ¼µ¯¸ß¶È 
	int cnt=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]>num[i-1]&&i!=0)
		{
			cnt++;
		 } 
	}
	printf("%d",cnt);
	return 0;
}

