#include<stdio.h>
int main()
{
	int n,x,cnt=0;;int jieguo;
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++)
	{   
	    int b=1;
		int a=i;
		do{ 
		    b*=10;
			jieguo=a/b;
			
			
			
		 } 
		while(b<a);
		b=b/10;
		do
		{
				jieguo=a/b%10;
				if(jieguo==x) cnt++;
				b/=10;
		}
		while(jieguo>=1);
		
	}
	printf("%d",cnt);
	return 0;
}
