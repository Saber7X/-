#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n;
	cin>>n;
	double left=-10000;
	double right =10000;
	double mid;
	while(right-left>1e-6)//��Ϊ���η������������Բ���ֱ����right>left������right-left>0,�����������Ĵ��ڣ�������right-left>1e-6 
	{
		mid=(left+right)/2;
		if(mid*mid*mid>=n)
		{
			right=mid;//��Ϊ���ڣ����Բ���-1�� 
		 } 
		 else
		 {
		 	left=mid;
		 }
	}
	printf("%.6lf",mid);
	return 0;
 } 
