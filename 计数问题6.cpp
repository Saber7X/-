#include<stdio.h> 
int main()
{
	int n,x,z=0;
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
		
		if(jieguo==x)
		{
			z++;
		}
		if(jieguo2==x)
		{
			z++;
		}
	
		
	}
	printf("%d",cnt);
	return 0;
}
