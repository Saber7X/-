#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a=n/50;//��ֵΪ50������; 
		int b=n%50/20;//��ֵΪ20������;
		int c=n%50%20/10;//��ֵΪ10������;
		int d=n%50%20%10/5;//��ֵΪ5������;
		int e=n%50%20%10%5/1;//��ֵΪ1������;
		if(a>=1){
			printf("50*%d",a);
		}
		if(b>=1){
			if(a>=1){
				printf("+");
			}
			printf("20*%d",b);
		}
		if(c>=1){
			if(b>=1||a>=1){
				printf("+");
			}
			printf("10*%d",c);
		}
		if(d>=1){
			if(a>=1||b>=1||c>=1){
				printf("+");
			}
			printf("5*%d",d);
		}
		if(e>=1){
			if(a>=1||b>=1||c>=1||d>=1){
				printf("+");
			}
			printf("1*%d",e);
		}
		printf("\n");
	}
	return 0;
}

