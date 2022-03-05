#include<iostream> 
#include<algorithm>
using namespace std;
int main()
{
	long long int a=1;
	long long int b=1;
	long long int i=3;
	long long int c;
	while(1)
	{
		cout<<i<<" : ";
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
