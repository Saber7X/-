#include<stdio.h> 	
void k(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j)
	{
		double sum=0.0;
		sum=a*28.9+b*32.7+c*45.6+d*78+e*35+f*86.2+g*27.8+h*43+i*56+j*65;
		printf("%.1f",sum) ;
		
	}
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	k(a,b,c,d,e,f,g,h,i,j);
	return 0;
}
