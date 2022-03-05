#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char b;int cnt=0;
	scanf("%d %c",&n,&b);
	int i,j,k;
	int sum;
	if(n==1)
	{
		printf("%c\n",b);
		printf("0");
		
		return 0;
	}
	sum=n-1;
	for(i=3;i<=n;i+=2)
	{
		sum=sum-i*2;
		
		if(sum<0)
		{
			sum=sum+i*2; //sum被多减了；加上被多减的可得剩下的； 所剩下的字符数 
			cnt=i-2;//因为字符数小于了0；行数 
			break;
		}
		else if(sum==0)
		{
			cnt=i;
			break;
		}
	}
	int x=0;
	while(cnt>=1)
	{
		for(i=0;i<x;i++)
		{
			printf(" "); 
		}
		x++;
		for(i=1;i<=cnt;i++)
		{
			printf("%c",b);
		}
		printf("\n");
		cnt-=2; 
	}
	x-=2;//之所以减2是因为接下来的遍历从0开始； 
	cnt+=4;//因为上面的循环中多减了一个2 
	while(x>=0)
	{
		for(i=0;i<x;i++)
		{
			printf(" ");
		 } 
		x--;
		for(i=1;i<=cnt;i++)
		{
			printf("%c",b);
		}
		cnt+=2;
		printf("\n");
	}
	printf("%d",sum); 
	return 0;
	
	
	
}

