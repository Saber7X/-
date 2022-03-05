#include<stdio.h> 
int main()
{
	int n,x,cnt=0;
	int jieguo;
	int jieguo2;
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++)
	{   
	    
		for(int j=1;j<=i;j*=10)
		{
			jieguo=i/j%10;
			if(i%11==0)
			{
				jieguo2=jieguo;
			}
		}
		if(i%11==0)
		{
			for(int k=1;k<=i;k*=10)
			{
				
				jieguo2=i/k%10;
			}
		}
		if(jieguo==x||jieguo2==x)
		{
			cnt++;
		}
	
		
	}
	printf("%d",cnt);
	return 0;
}
