#include<stdio.h>
int main()
{
	int a;
	int i,j,k;
	int jsq=0;
	scanf("%d",&a);
	i=a;
	while(i<=a+3)
	{
		
	    j=a;
		while(j<=a+3)
		{
			
			k=a;
			while(k<=a+3)
			{
				
				if(i!=j)
				{
					if(i!=k)
					{
						if(j!=k)
						{   
						    jsq++;
							printf("%d%d%d",i,j,k);
							if(jsq==6)
							{
								printf("\n");
								jsq=0;
							}
							else
							{
								printf(" ");
							}
						}	
					 } 
				}
			    k++;
			}
		    j++;
		}
	    i++;
	}
	return 0;
}
