#include<bits/stdc++.h>
struct name{
	char a;//性别
	double b;//身高 
}num[100];
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		getchar();
		scanf("%c %lf",&num[i].a ,&num[i].b );
	}
	for(int i=0;i<n;i++)
	{
		if(num[i].a =='M')
		{
			printf("%.2f\n",num[i].b /1.09);
			
		}
		else
		{
			printf("%.2f\n",num[i].b *1.09);
		}
	}
	return 0;
}
