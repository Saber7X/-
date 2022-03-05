#include<stdio.h>
int main()
{   
    int N,a,b,c;
	scanf("%d",&N);
   	for (int i=0;i<N;i++)
        {   
        	scanf("%d %d",&a,&b);
            printf("%d\n",(a%100+b%100)%100);
		}
		
		
		
		
	
	
	
		
	return 0;
 } 
