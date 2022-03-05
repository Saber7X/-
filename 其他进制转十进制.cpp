#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y=0;//记录结果 
	int product=1;
	int x;
	int p;
	printf("输入的数是几进制？\n");
	scanf("%d",&p); 
	scanf("%d",&x);
	while(x>0)
	{
		y+=(x%10)*product;
		x/=10;
		product*=p; 
	}
	printf("%d",y); 
	return 0;
}
