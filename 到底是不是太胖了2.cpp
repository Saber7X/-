#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		double weight,hight;
		cin>>hight>>weight;
		double sum=(hight-100)*0.9*2;//标准体重
		double flag=sum*0.1;//标准体重*0.1
		
		
		if(abs(sum-weight)<flag)
		{
			cout<<"You are wan mei!"<<endl;
		 } 
		else if(sum>weight)
		{
			cout<<"You are tai shou le!"<<endl;
		}
		else if(sum<weight)
		{
			cout<<"You are tai pang le!"<<endl;
		}
}			  
			
			
		 
		 
		
	
	return 0;
}
