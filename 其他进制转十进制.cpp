#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y=0;//��¼��� 
	int product=1;
	int x;
	int p;
	printf("��������Ǽ����ƣ�\n");
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
