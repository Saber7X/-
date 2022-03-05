#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a=n/50;//面值为50的张数; 
		int b=n%50/20;//面值为20的张数;
		int c=n%50%20/10;//面值为10的张数;
		int d=n%50%20%10/5;//面值为5的张数;
		int e=n%50%20%10%5/1;//面值为1的张数;
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

