#include<stdio.h>
int main()
{
	int n,x,cnt=0;
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++)
	{
		int a=i;
		int b=1;
		int jieguo;
		while(jieguo>=1)//�ֽ�����λ 
		{
			jieguo=a/b;
			b*=10;
			
			
		
		}
		b/=10;
		while(jieguo>=1)//�ֽ���м�ÿһλ 
			{
				jieguo=a/b%10;
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
