#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int cnt=1;//��������λ��
	int ans=1;//������
	while(1)
	{
		if(ans<n)
		{
			ans=ans*10+1;
			cnt++;
		}
		if(ans>=n)
		{
			break;
		}
	} 
	//printf("%d\n",ans);
	while(1)
	{
		printf("%d",ans/n);
		if(ans%n!=0)//�����������
		{
			ans=(ans%n)*10+1;//����β0+1�����±����� 
			cnt++; 
		 } 
		 else//��������������ҵ��� 
		 {
		 	break;
		 }
	}
	cout<<" "<<cnt;
	return 0; 
	
}
