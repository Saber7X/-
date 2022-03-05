#include<bits/stdc++.h>
using namespace std;
void x(int* size)//形参 
{
	size-=50;
	printf("%d\n",size);
}
int main()
{
	int* num=100;
	/*int* p;
	*p=5;
	int num=5;
	printf("%d\n",p);
	printf("%d\n",*p);
	//scanf("%d",&num);
	printf("%d\n",&num);*/
	//int a[100];//int占四个字节 
	//printf("%d\n",a);
	//printf("%d\n",&a[1]);
	x(num);//实参 
	printf("%d\n",num); 
	
	return 0;
}
