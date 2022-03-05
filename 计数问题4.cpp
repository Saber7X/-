#include<stdio.h> 
int main()
{
	int n,x,cnt=0;
	int jieguo;
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++)
	{   
	    int b=1;
		int a=i;
		while(b<=a)
		{ 
		    b*=10;
			
	   	}
		b=b/10;
		while(jieguo>=1)
		{
				cnt=0;
				jieguo=a/b;
				jieguo%=10;
				if(jieguo==x)
				{
					cnt++;
				}
				b/=10;
		}
		
	}
	printf("%d",cnt);
	return 0;
}
