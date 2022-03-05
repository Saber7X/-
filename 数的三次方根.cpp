#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n;
	cin>>n;
	double left=-10000;
	double right =10000;
	double mid;
	while(right-left>1e-6)//因为三次方根会有误差，所以不能直接用right>left，这是right-left>0,必须允许误差的存在，所以用right-left>1e-6 
	{
		mid=(left+right)/2;
		if(mid*mid*mid>=n)
		{
			right=mid;//因为等于，所以不用-1； 
		 } 
		 else
		 {
		 	left=mid;
		 }
	}
	printf("%.6lf",mid);
	return 0;
 } 
