#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	int n;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		int a,b,c;
 		cin>>a>>b>>c;
 		if(abs(a-b)<=c)//����ȫ������һ�������� 
 		{
 			cout<<"YES"<<endl;
		 }
		 else
		 {
		 	int minn=min(a,b);
		 	int sum=abs(a-b)/minn;
		 	if(sum<c)//���ÿ�����Ӻ����Ĳ�С��Ҫ��� 
		 	{
		 		cout<<"YES"<<endl;
			 }
			 else if(sum==c)//���ÿ�����Ӻ����Ĳ����Ҫ��� 
			 {
			 	if(abs(a-b)%minn==0)//����������� 
			 	{
			 		cout<<"YES"<<endl;
				 }
				 else//���������� 
				 {
				 	cout<<"NO"<<endl;
				 }
			 }
			 else//���ÿ�����Ӻ����Ĳ����Ҫ��� 
			 {
			 	cout<<"NO"<<endl;
			 }
		 }
	 }
 	return 0;
 }
